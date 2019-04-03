/*!
* \brief �ǱȽ������򣺻�������
* 
* ���������ǰ��յ�λ������Ȼ���ռ����ٰ��ո�λ����Ȼ�����ռ����������ƣ�ֱ�����λ�� 
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

	//ʱ�临�Ӷȣ�ƽ��O(N*k) ���O(N*k) �O(N*k)
	//�ռ临�Ӷȣ�O(N+k)
	//�㷨�ȶ��ԣ��ȶ�
	void sort(ElementType *array, int len);
};

