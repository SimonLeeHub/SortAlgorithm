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
	// ���Բ��Ӵ˱�־λ��������ӣ�����������ʱ�临�Ӷ�Ҳ��O(N^2)
	// ����Ӵ˱�־λ����������������ʱ��û�з����κ�һ�ν�����˵����������
	// flagΪfalse���㷨�˳������ؽ��к����ıȽ�
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
