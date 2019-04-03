/*!
* \brief 插入类排序：希尔排序
* 
* 是简单插入排序的改进版，它与插入排序的不同之处在于，它会优先比较距离较远的元素。 
* 
* \author Lee
* \date 2019.04.03
*/
#pragma once
#include "sortoperation.h"
class CShellSort :
	public CSortOperation
{
public:
	CShellSort(void);
	~CShellSort(void);
	//时间复杂度：平均O(N^1.3) 最好O(N) 最坏O(N^2)
	//空间复杂度：O(1)
	//算法稳定性：不稳定 （eg：10 80 80 20 第一趟排序会把第一个80放到第二个80的后面）
	void sort(ElementType *array, int len);
};

