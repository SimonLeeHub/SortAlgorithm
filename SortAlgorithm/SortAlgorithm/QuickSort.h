/*!
* \brief 交换类排序：快速排序
* 
* 通过一趟排序将待排记录分隔成独立的两部分，其中一部分记录的关键字均比另一部分的关键字小，
* 则可分别对这两部分记录继续进行排序，以达到整个序列有序。 
* 
* \author Lee
* \date 2019.04.03
*/
#pragma once
#include "sortoperation.h"
class CQuickSort :
	public CSortOperation
{
public:
	CQuickSort(void);
	~CQuickSort(void);

	//时间复杂度：平均O(NlogN) 最好O(NlogN) 最坏O(N^2)
	//空间复杂度：O(logN)
	//算法稳定性：不稳定 （eg：1 1 1 1 1 第二个1和第三个1会交换位置）
	void sort(ElementType *array, int len);
	void quickSort(ElementType *array, int left, int right);
	ElementType median3(ElementType *array, int left, int right);
	void swap(ElementType *A, ElementType *B);
};

