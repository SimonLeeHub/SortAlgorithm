/*!
* \brief ���������򣺼򵥲�������
* 
* ����δ�������ݣ��������������дӺ���ǰɨ�裬�ҵ���Ӧλ�ò����롣 
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

	//ʱ�临�Ӷȣ�ƽ��O(N^2) ���O(N) �O(N^2)
	//�ռ临�Ӷȣ�O(1)
	//�㷨�ȶ��ԣ��ȶ�
	void sort(ElementType *array, int len);
};

