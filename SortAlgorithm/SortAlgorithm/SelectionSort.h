/*!
* \brief ѡ�������򣺼�ѡ������
* 
* ������δ�����������ҵ���С����Ԫ�أ���ŵ��������е���ʼλ�ã�
* Ȼ���ٴ�ʣ��δ����Ԫ���м���Ѱ����С����Ԫ�أ�Ȼ��ŵ����������е�ĩβ 
* 
* \author Lee
* \date 2019.04.03
*/
#pragma once
#include "sortoperation.h"
class CSelectionSort :
	public CSortOperation
{
public:
	CSelectionSort(void);
	~CSelectionSort(void);

	//ʱ�临�Ӷȣ�ƽ��O(N^2) ���O(N^2) �O(N^2)
	//�ռ临�Ӷȣ�O(1)
	//�㷨�ȶ��ԣ����ȶ� ��eg�� 8 8 2 ��һ��ѡ�����򽫵�һ��8�����˵ڶ�8֮��
	void sort(ElementType *array, int len);
};

