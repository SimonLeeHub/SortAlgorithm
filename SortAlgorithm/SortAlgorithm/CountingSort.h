/*!
* \brief 非比较类排序：计数排序
* 
* 将输入的数据值转化为键存储在额外开辟的数组空间中。 
* 
* \author Lee
* \date 2019.04.03
*/
#pragma once
#include "sortoperation.h"
class CCountingSort :
	public CSortOperation
{
public:
	CCountingSort(void);
	~CCountingSort(void);
	//时间复杂度：平均O(N+k) 最好O(N+k) 最坏O(N+k)
	//空间复杂度：O(k)
	//算法稳定性：稳定
	void sort(ElementType *array, int len);
};

