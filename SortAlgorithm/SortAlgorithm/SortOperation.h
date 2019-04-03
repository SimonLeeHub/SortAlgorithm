/*!
* \brief 排序接口类
*  
* 输入为序列指针及序列长度，序列中包含重复元素 
*
* \author Lee
* \date 2019.04.03
*/
#pragma once
typedef int ElementType;
class CSortOperation
{
public:
	CSortOperation(void);
	virtual ~CSortOperation(void);

	virtual void sort(ElementType *array, int len) = 0;

	std::string description;
};

