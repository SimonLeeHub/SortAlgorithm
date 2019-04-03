#include "stdafx.h"
#include "InsertionSort.h"


CInsertionSort::CInsertionSort(void)
{
	description = "\n\n\n-------- Insertion Sort --------\n";
}


CInsertionSort::~CInsertionSort(void)
{
}

void CInsertionSort::sort(ElementType *array, int len)
{
	ElementType tempE;
	int preIndex;
	// i从1开始，因为第0个元素默认已排序
	for(int i=1;i<len;i++)
	{
		tempE = array[i];
		//preIndex从当前元素的前一个元素开始
		for(preIndex=i-1;preIndex>=0;preIndex--)
		{
			if(array[preIndex]>tempE) 
			{
				array[preIndex+1] = array[preIndex];
			}
			else
			{
				break;
			}
		}
		array[preIndex+1] = tempE;
	}
}