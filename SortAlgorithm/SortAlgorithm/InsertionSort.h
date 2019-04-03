/*!
* \brief 插入类排序：简单插入排序
* 
* 对于未排序数据，在已排序序列中从后向前扫描，找到相应位置并插入。 
* 
* \author Lee
* \date 2019.04.03
*/
#pragma once
#include "sortoperation.h"
class CInsertionSort :
	public CSortOperation
{
public:
	CInsertionSort(void);
	~CInsertionSort(void);

	//时间复杂度：平均O(N^2) 最好O(N) 最坏O(N^2)
	//空间复杂度：O(1)
	//算法稳定性：稳定
	void sort(ElementType *array, int len);
};

