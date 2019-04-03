/*!
* \brief �鲢�����򣺶�·�鲢����
* 
* ����ʹÿ��������������ʹ�����жμ����� 
* 
* \author Lee
* \date 2019.04.03
*/
#pragma once
#include "sortoperation.h"
class CMergeSort :
	public CSortOperation
{
public:
	CMergeSort(void);
	~CMergeSort(void);

	//ʱ�临�Ӷȣ�ƽ��O(NlogN) ���O(NlogN) �O(NlogN)
	//�ռ临�Ӷȣ�O(N)
	//�㷨�ȶ��ԣ��ȶ�
	void sort(ElementType *array, int len);
	void mergeSort(ElementType *array, ElementType *tempA, int left, int right);
	void merge(ElementType *array, ElementType *tempA, int lPos, int rPos, int rEnd);
};

