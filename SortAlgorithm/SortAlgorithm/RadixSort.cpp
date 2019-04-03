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
	// 3为序列中最高位的位数
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
				// 注意：此处必须从链表的头部开始遍历，不能从末尾弹出
				// 如果从末尾弹出，将破坏低位的排列顺序
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
