/*!
* \brief �ǱȽ������򣺼�������
* 
* �����������ֵת��Ϊ���洢�ڶ��⿪�ٵ�����ռ��С� 
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
	//ʱ�临�Ӷȣ�ƽ��O(N+k) ���O(N+k) �O(N+k)
	//�ռ临�Ӷȣ�O(k)
	//�㷨�ȶ��ԣ��ȶ�
	void sort(ElementType *array, int len);
};

