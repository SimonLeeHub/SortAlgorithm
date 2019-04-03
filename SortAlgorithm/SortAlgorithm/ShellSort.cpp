#include "stdafx.h"
#include "ShellSort.h"


CShellSort::CShellSort(void)
{
	description = "\n\n\n-------- Shell Sort --------\n";
}


CShellSort::~CShellSort(void)
{
}

void CShellSort::sort(ElementType *array, int len)
{
	int preIndex;
	ElementType tempE;
	//根据gap确定排序的趟数
	for(int gap = len/2;gap>0;gap /= 2)
	{
		//根据gap值的大小将序列分成gap个子序列，多个子序列分别进行简单插入排序
		//此处多个子序列交替进行简单插入排序
		for(int i=gap;i<len;i++)
		{
			tempE = array[i];
			//preIndex从当前元素的前一个元素，而此处的前一个元素与当前元素的距离为gap
			for(preIndex = i-gap;preIndex>=0;preIndex -= gap)
			{
				if(array[preIndex]>tempE)
				{
					array[preIndex+gap] = array[preIndex];
				}
				else
				{
					break;
				}
			}
			array[preIndex+gap] = tempE;
		}
	}
}
