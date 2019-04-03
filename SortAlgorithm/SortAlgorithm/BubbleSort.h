/*!
* \brief 交换类排序：冒泡排序
* 
* 重复地走访过要排序的数列，一次比较两个元素，如果它们的顺序错误就把它们交换过来
* 走访数列的工作是重复地进行直到没有再需要交换，也就是说该数列已经排序完成。
* 
* \author Lee
* \date 2019.04.03
*/
#pragma once
#include "sortoperation.h"
class CBubbleSort :
	public CSortOperation
{
public:
	CBubbleSort(void);
	~CBubbleSort(void);

	//时间复杂度：平均O(N^2) 最好O(N^2) 最坏O(N^2)
	//空间复杂度：O(1)
	//算法稳定性：稳定
	void sort(ElementType *array, int len);
};

