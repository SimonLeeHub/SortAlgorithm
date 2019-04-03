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
	// i��1��ʼ����Ϊ��0��Ԫ��Ĭ��������
	for(int i=1;i<len;i++)
	{
		tempE = array[i];
		//preIndex�ӵ�ǰԪ�ص�ǰһ��Ԫ�ؿ�ʼ
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