#include "stdafx.h"
#include "BucketSort.h"
#include "InsertionSort.h"


CBucketSort::CBucketSort(void)
{
	description = "\n\n\n-------- Bucket Sort --------\n";
}


CBucketSort::~CBucketSort(void)
{
}

void CBucketSort::sort(ElementType *array, int len)
{
	// ��ȡ�����е������Сֵ������ȷ�����
	int minE = array[0];
	int maxE = array[0];
	for(int i=1;i<len;i++)
	{
		if(array[i]<minE) minE = array[i];
		if(array[i]>maxE) maxE = array[i];
	}

	int width = maxE-minE+1;

	EVector bucket[10];
	// ������Ԫ�ر任��[0,1)��Ȼ���10������ȡ������Ϊ����Ͱ������
	for(int i=0;i<len;i++) bucket[(array[i]-minE)*10/width].push_back(array[i]);
	CInsertionSort mInsertionSort;
	int index = 0;
	for(int i=0;i<10;i++)
	{
		if(bucket[i].size() > 0)
		{
			//�Էǿ�Ͱ�������򣬲������������п�����ԭ��������
			mInsertionSort.sort(&bucket[i][0], bucket[i].size());
			EVector::const_iterator iterator = bucket[i].begin();
			for(;iterator != bucket[i].end();iterator++)
			{
				array[index++] = *iterator;
			}
		}
	}
}
