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
	//从初始位置一直遍历到序列的倒数第二个元素，总共需要N-1趟
	for(int i=0;i<len-1;i++)
	{
		// 初始化最小索引为当前位置
		minIndex = i;
		// 从当前位置往后一直遍历到序列末尾
		for(int j=i+1;j<len;j++)
		{
			if(array[j]<array[minIndex]) 
			{
				// 记录最小索引位置
				minIndex = j;
			}
		}
		// 交换当前位置与最小索引位置的元素
		tempE = array[i];
		array[i] = array[minIndex];
		array[minIndex] = tempE;
	}
}
