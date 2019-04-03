#include "stdafx.h"
#include "CountingSort.h"


CCountingSort::CCountingSort(void)
{
	description = "\n\n\n-------- Counting Sort --------\n";
}


CCountingSort::~CCountingSort(void)
{
}

void CCountingSort::sort(ElementType *array, int len)
{
	// 此处假设最大值不超过199，最小值不小于0，即桶的大小k为200
	// 实际使用时，在不知道最大值最小值的情况下，可以用两遍冒泡排序获取最大值和最小值
	ElementType tempA[200] = {0};
	assert(tempA);
	for(int i=0;i<len;i++)
	{
		tempA[array[i]]++;
	}
	int index = 0;
	for(int i=0;i<200;i++)
	{
		while(tempA[i]>0)
		{
			array[index++] = i;
			tempA[i]--;
		}
	}
}
