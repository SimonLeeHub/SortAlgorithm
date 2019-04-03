#include "stdafx.h"
#include "HeapSort.h"


CHeapSort::CHeapSort(void)
{
	description = "\n\n\n-------- Heap Sort --------\n";
}


CHeapSort::~CHeapSort(void)
{
}

void CHeapSort::sort(ElementType *array, int len)
{
	ElementType tempE;
	for(int i=len-1; i>0; i--)
	{
		// �����󶥶ѣ�����ǰ�ڵ�ؼ�ֵ���ڵ��ں���ڵ�ؼ�ֵ
		// ������ؼ�ֵ��Ԫ�����α���������ĩ�ˣ����õ������о��Ǵ�С���������
		heapify(array, i+1);
		// ÿ�ν����Ѷ�Ԫ�غͶ�ĩβ��Ԫ�أ������ѵĴ�С��1
		// iΪ��ĩ�ڵ������������i��0��ʼ�����ԶѵĴ�С��Ϊi+1
		tempE = array[0];
		array[0] = array[i];
		array[i] = tempE;
	}
}

void CHeapSort::heapify(ElementType *array, int len)
{
	// len-1Ϊ���һ��Ԫ�ص������ţ��ټ�1����2��Ϊĩ�ڵ�ĸ��ڵ�
	// Ȼ���ĩ�ڵ�ĸ��ڵ���ǰ������ڵ������
	for(int i = (len-2)/2;i >= 0; i--)
	{
		int child;
		ElementType tempE;
		// ѭ��������ȥ��ǰ�������ǵ�ǰ�ڵ�������ӣ������Ѿ����˵�Ҷ�ӽڵ㣬���������ѭ����ֹ
		for(int j=i;2*j+1<=(len-1);j=child)
		{
			// �Ȼ�ȡ�����
			child = 2*j+1;
			// ���ж��Ƿ����Ҷ��ӣ�����У��ٱȽ����Ҷ��ӵĴ�С
			if((child+1 <= len-1 )&&(array[child+1]>array[child])) child++;
			if(array[j] < array[child]) 
			{
				tempE = array[j];
				array[j] = array[child];
				array[child] = tempE;
			}
			// ע��˴���break������ǰ�ڵ��Ѿ���С�������ӽڵ�ʱ������������������
			// ��Ϊ�����Ǵӵ����ڶ��㿪ʼ���˵ģ��Ժ����ϵ�ÿһ�㣬�����ǰ�ڵ㲻С�������ӽڵ㣬
			// ��ô��һ����С�������еĺ��
			else
			{
				break;
			}
		}
	}
}
