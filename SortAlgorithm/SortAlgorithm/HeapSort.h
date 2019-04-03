/*!
* \brief 选择类排序：堆排序
* 
* 利用堆这种数据结构所设计的一种排序算法，
* 首先建堆，然后将堆顶元素和堆末元素互换，然后再建堆，再互换，直至排序完成
* 
* \author Lee
* \date 2019.04.03
*/
#pragma once
#include "sortoperation.h"
class CHeapSort :
	public CSortOperation
{
public:
	CHeapSort(void);
	~CHeapSort(void);

	//时间复杂度：平均O(NlogN) 最好O(NlogN) 最坏O(NlogN)
	//空间复杂度：O(1)
	//算法稳定性：不稳定 （eg：1 1 排序将第一个1和第二个1交换了）
	void sort(ElementType *array, int len);
	void heapify(ElementType *array, int len);
};

