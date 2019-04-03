/*!
* \brief 选择类排序：简单选择排序
* 
* 首先在未排序序列中找到最小（大）元素，存放到排序序列的起始位置，
* 然后，再从剩余未排序元素中继续寻找最小（大）元素，然后放到已排序序列的末尾 
* 
* \author Lee
* \date 2019.04.03
*/
#pragma once
#include "sortoperation.h"
class CSelectionSort :
	public CSortOperation
{
public:
	CSelectionSort(void);
	~CSelectionSort(void);

	//时间复杂度：平均O(N^2) 最好O(N^2) 最坏O(N^2)
	//空间复杂度：O(1)
	//算法稳定性：不稳定 （eg： 8 8 2 第一趟选择排序将第一个8放在了第二8之后）
	void sort(ElementType *array, int len);
};

