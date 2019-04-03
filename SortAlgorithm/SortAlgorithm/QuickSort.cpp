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
	// 快速排序驱动例程，方便递归调用
	quickSort(array, 0, len-1);
}

void CQuickSort::quickSort(ElementType *array, int left, int right)
{
	if(left+2 <= right)
	{
		// 三数中值分割法
		ElementType pivot = median3(array, left, right);
		// 由于采用了三数中值分割法，引入了顺序附加信息，所以可以从队头的下一个元素，
		// 倒数第二个元素的前一个元素开始检测
		int i = left;
		int j = right-1;
		for(;;)
		{
			//先对i j自增或自减，然后再与中值比较，避免死循环
			while(array[++i] < pivot) {}
			while(array[--j] > pivot) {}
			if(i<j) 
				swap(&array[i], &array[j]);
			else
				break;
		}
		// 此轮排序完毕，交换i位置处的元素和中值元素
		swap(&array[i], &array[right-1]);

		// 对中值左右两边的子序列递归快速排序
		quickSort(array, left, i-1);
		quickSort(array, i+1, right);
	}
	else
	{
		// 此时不是1个元素就是2个元素，1个元素什么也不做，
		// 2个元素进行比较排序
		if(right-left == 1)
		{
			if(array[left] > array[right]) swap(&array[left], &array[right]);
		}
	}
}

ElementType CQuickSort::median3(ElementType *array, int left, int right)
{
	// 三数中值分割法，选择序列头、序列尾和序列中间三个元素进行简单选择排序
	// 将中值元素放到序列的倒数第二个位置，并返回其值
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
