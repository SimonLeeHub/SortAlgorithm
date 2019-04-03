/*!
* \brief ���������򣺿�������
* 
* ͨ��һ�����򽫴��ż�¼�ָ��ɶ����������֣�����һ���ּ�¼�Ĺؼ��־�����һ���ֵĹؼ���С��
* ��ɷֱ���������ּ�¼�������������Դﵽ������������ 
* 
* \author Lee
* \date 2019.04.03
*/
#pragma once
#include "sortoperation.h"
class CQuickSort :
	public CSortOperation
{
public:
	CQuickSort(void);
	~CQuickSort(void);

	//ʱ�临�Ӷȣ�ƽ��O(NlogN) ���O(NlogN) �O(N^2)
	//�ռ临�Ӷȣ�O(logN)
	//�㷨�ȶ��ԣ����ȶ� ��eg��1 1 1 1 1 �ڶ���1�͵�����1�ύ��λ�ã�
	void sort(ElementType *array, int len);
	void quickSort(ElementType *array, int left, int right);
	ElementType median3(ElementType *array, int left, int right);
	void swap(ElementType *A, ElementType *B);
};

