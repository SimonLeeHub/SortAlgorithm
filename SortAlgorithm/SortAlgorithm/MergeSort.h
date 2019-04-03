/*!
* \brief 归并类排序：二路归并排序
* 
* 即先使每个子序列有序，再使子序列段间有序。 
* 
* \author Lee
* \date 2019.04.03
*/
#pragma once
#include "sortoperation.h"
class CMergeSort :
	public CSortOperation
{
public:
	CMergeSort(void);
	~CMergeSort(void);

	//时间复杂度：平均O(NlogN) 最好O(NlogN) 最坏O(NlogN)
	//空间复杂度：O(N)
	//算法稳定性：稳定
	void sort(ElementType *array, int len);
	void mergeSort(ElementType *array, ElementType *tempA, int left, int right);
	void merge(ElementType *array, ElementType *tempA, int lPos, int rPos, int rEnd);
};

