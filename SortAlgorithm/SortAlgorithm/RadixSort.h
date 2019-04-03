/*!
* \brief 非比较类排序：基数排序
* 
* 基数排序是按照低位先排序，然后收集；再按照高位排序，然后再收集；依次类推，直到最高位。 
* 
* \author Lee
* \date 2019.04.03
*/
#pragma once
#include "sortoperation.h"
#include <vector>
typedef std::vector<ElementType> EVector;
class CRadixSort :
	public CSortOperation
{
public:
	CRadixSort(void);
	~CRadixSort(void);

	//时间复杂度：平均O(N*k) 最好O(N*k) 最坏O(N*k)
	//空间复杂度：O(N+k)
	//算法稳定性：稳定
	void sort(ElementType *array, int len);
};

