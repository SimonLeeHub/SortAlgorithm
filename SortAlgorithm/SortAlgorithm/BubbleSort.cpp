#include "stdafx.h"
#include "BubbleSort.h"


CBubbleSort::CBubbleSort(void)
{
	description = "\n\n\n-------- Bubble Sort --------\n";
}


CBubbleSort::~CBubbleSort(void)
{
}

void CBubbleSort::sort(ElementType *array, int len)
{
	ElementType tempE;
	// 可以不加此标志位，如果不加，最好情况排序时间复杂度也需O(N^2)
	// 如果加此标志位，则输入有序数列时，没有发生任何一次交换，说明序列有序
	// flag为false，算法退出，不必进行后续的比较
	bool flag = false;
	for(int i=len-1;i>0;i--)
	{
		flag = false;
		for(int j=0;j<i;j++)
		{
			if(array[j] > array[j+1])
			{
				tempE = array[j];
				array[j] = array[j+1];
				array[j+1] = tempE;
				flag = true;
			}
		}
		if(!flag) break;
	}
}
