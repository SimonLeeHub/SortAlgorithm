/*!
* \brief ����ӿ���
*  
* ����Ϊ����ָ�뼰���г��ȣ������а����ظ�Ԫ�� 
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

