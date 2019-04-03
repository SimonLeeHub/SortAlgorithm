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
	//����gapȷ�����������
	for(int gap = len/2;gap>0;gap /= 2)
	{
		//����gapֵ�Ĵ�С�����зֳ�gap�������У���������зֱ���м򵥲�������
		//�˴���������н�����м򵥲�������
		for(int i=gap;i<len;i++)
		{
			tempE = array[i];
			//preIndex�ӵ�ǰԪ�ص�ǰһ��Ԫ�أ����˴���ǰһ��Ԫ���뵱ǰԪ�صľ���Ϊgap
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
