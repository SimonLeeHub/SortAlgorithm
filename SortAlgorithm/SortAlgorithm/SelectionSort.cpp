#include "stdafx.h"
#include "SelectionSort.h"


CSelectionSort::CSelectionSort(void)
{
	description = "\n\n\n-------- Selection Sort --------\n";
}


CSelectionSort::~CSelectionSort(void)
{
}

void CSelectionSort::sort(ElementType *array, int len)
{
	ElementType tempE;
	int minIndex;
	//�ӳ�ʼλ��һֱ���������еĵ����ڶ���Ԫ�أ��ܹ���ҪN-1��
	for(int i=0;i<len-1;i++)
	{
		// ��ʼ����С����Ϊ��ǰλ��
		minIndex = i;
		// �ӵ�ǰλ������һֱ����������ĩβ
		for(int j=i+1;j<len;j++)
		{
			if(array[j]<array[minIndex]) 
			{
				// ��¼��С����λ��
				minIndex = j;
			}
		}
		// ������ǰλ������С����λ�õ�Ԫ��
		tempE = array[i];
		array[i] = array[minIndex];
		array[minIndex] = tempE;
	}
}
