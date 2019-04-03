#include "stdafx.h"
#include "RadixSort.h"


CRadixSort::CRadixSort(void)
{
	description = "\n\n\n-------- Radix Sort --------\n";
}


CRadixSort::~CRadixSort(void)
{
}

void CRadixSort::sort(ElementType *array, int len)
{
	int mod = 10;
	int dev = 1;
	EVector bucket[10];
	// 3Ϊ���������λ��λ��
	for(int i=0;i<3;i++, mod *= 10, dev *= 10)
	{
		for(int j=0;j<len;j++)
		{
			bucket[(array[j] % mod)/dev].push_back(array[j]);
		}
		int index = 0;
		for(int j=0;j<10;j++)
		{
			if(bucket[j].size() > 0)
			{
				// ע�⣺�˴�����������ͷ����ʼ���������ܴ�ĩβ����
				// �����ĩβ���������ƻ���λ������˳��
				EVector::const_iterator iterator = bucket[j].begin();
				for(;iterator != bucket[j].end();iterator++)
				{
					array[index++] = *iterator;
				}
				bucket[j].clear();
			}
		}
	}
}
