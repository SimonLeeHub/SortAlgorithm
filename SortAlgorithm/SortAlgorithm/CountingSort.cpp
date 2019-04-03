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
	// �˴��������ֵ������199����Сֵ��С��0����Ͱ�Ĵ�СkΪ200
	// ʵ��ʹ��ʱ���ڲ�֪�����ֵ��Сֵ������£�����������ð�������ȡ���ֵ����Сֵ
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
