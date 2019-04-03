#include "stdafx.h"
#include "MergeSort.h"


CMergeSort::CMergeSort(void)
{
	description = "\n\n\n-------- Merge Sort --------\n";
}


CMergeSort::~CMergeSort(void)
{
}

void CMergeSort::sort(ElementType *array, int len)
{
	ElementType *tempA = (ElementType*)malloc(sizeof(ElementType)*len);
	assert(tempA);
	// �鲢�����������̣�����ݹ���ã�����tempA��Ϊ��ʱbuffer
	mergeSort(array, tempA, 0, len-1);
}

void CMergeSort::mergeSort(ElementType *array, ElementType *tempA, int left, int right)
{
	if(left < right)
	{
		int center = (left+right)/2;
		mergeSort(array, tempA, left, center);
		mergeSort(array, tempA, center+1, right);
		// �����������е��յ�Ϊ�������е����-1�����Բ��ô����������е��յ�����
		merge(array, tempA, left, center+1, right);
	}

}

void CMergeSort::merge(ElementType *array, ElementType *tempA, int lPos, int rPos, int rEnd)
{
	int tempP = lPos;
	int lEnd = rPos-1;
	int numE = rEnd - lPos + 1;
	while((lPos<=lEnd)&&(rPos<=rEnd))
	{
		if(array[lPos]<=array[rPos])
			tempA[tempP++] = array[lPos++];
		else
			tempA[tempP++] = array[rPos++];
	}
	while(lPos<=lEnd) tempA[tempP++] = array[lPos++];
	while(rPos<=rEnd) tempA[tempP++] = array[rPos++];
	// ����ǰ���Ѿ�֪�������������������յ�Ϊ�ο�����ǰ����
	for(int i=0;i<numE;i++, rEnd--)
		array[rEnd] = tempA[rEnd];
}
