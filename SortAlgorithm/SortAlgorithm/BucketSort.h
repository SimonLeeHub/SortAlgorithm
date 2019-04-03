/*!
* \brief 非比较类排序：桶排序
* 
* 假设输入数据服从均匀分布（线性变换到0~1），将数据分到有限数量的桶里，
* 每个桶再分别排序（有可能再使用别的排序算法或是以递归方式继续使用桶排序进行排） 
* 
* \author Lee
* \date 2019.04.03
*/
#pragma once
#include "sortoperation.h"
#include <vector>
typedef std::vector<ElementType> EVector;
class CBucketSort :
	public CSortOperation
{
public:
	CBucketSort(void);
	~CBucketSort(void);

	//时间复杂度：平均O(N+k) 最好O(N) 最坏O(N^2)
	//空间复杂度：O(N+k)
	//算法稳定性：稳定
	void sort(ElementType *array, int len);
};

