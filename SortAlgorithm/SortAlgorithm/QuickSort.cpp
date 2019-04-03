#include "stdafx.h"
#include "QuickSort.h"


CQuickSort::CQuickSort(void)
{
	description = "\n\n\n-------- Quick Sort --------\n";
}


CQuickSort::~CQuickSort(void)
{
}

void CQuickSort::sort(ElementType *array, int len)
{
	// ���������������̣�����ݹ����
	quickSort(array, 0, len-1);
}

void CQuickSort::quickSort(ElementType *array, int left, int right)
{
	if(left+2 <= right)
	{
		// ������ֵ�ָ
		ElementType pivot = median3(array, left, right);
		// ���ڲ�����������ֵ�ָ��������˳�򸽼���Ϣ�����Կ��ԴӶ�ͷ����һ��Ԫ�أ�
		// �����ڶ���Ԫ�ص�ǰһ��Ԫ�ؿ�ʼ���
		int i = left;
		int j = right-1;
		for(;;)
		{
			//�ȶ�i j�������Լ���Ȼ��������ֵ�Ƚϣ�������ѭ��
			while(array[++i] < pivot) {}
			while(array[--j] > pivot) {}
			if(i<j) 
				swap(&array[i], &array[j]);
			else
				break;
		}
		// ����������ϣ�����iλ�ô���Ԫ�غ���ֵԪ��
		swap(&array[i], &array[right-1]);

		// ����ֵ�������ߵ������еݹ��������
		quickSort(array, left, i-1);
		quickSort(array, i+1, right);
	}
	else
	{
		// ��ʱ����1��Ԫ�ؾ���2��Ԫ�أ�1��Ԫ��ʲôҲ������
		// 2��Ԫ�ؽ��бȽ�����
		if(right-left == 1)
		{
			if(array[left] > array[right]) swap(&array[left], &array[right]);
		}
	}
}

ElementType CQuickSort::median3(ElementType *array, int left, int right)
{
	// ������ֵ�ָ��ѡ������ͷ������β�������м�����Ԫ�ؽ��м�ѡ������
	// ����ֵԪ�طŵ����еĵ����ڶ���λ�ã���������ֵ
	int center = (left + right)/2;
	if(array[left] > array[center]) swap(&array[left], &array[center]);
	if(array[left] > array[right]) swap(&array[left], &array[right]);
	if(array[center] > array[right]) swap(&array[center], &array[right]);
	swap(&array[center], &array[right-1]);
	return array[right-1];
}

void CQuickSort::swap(ElementType *A, ElementType *B)
{
	ElementType tempE = *A;
	*A = *B;
	*B = tempE;
}
