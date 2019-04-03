/*!
* \brief ѡ�������򣺶�����
* 
* ���ö��������ݽṹ����Ƶ�һ�������㷨��
* ���Ƚ��ѣ�Ȼ�󽫶Ѷ�Ԫ�غͶ�ĩԪ�ػ�����Ȼ���ٽ��ѣ��ٻ�����ֱ���������
* 
* \author Lee
* \date 2019.04.03
*/
#pragma once
#include "sortoperation.h"
class CHeapSort :
	public CSortOperation
{
public:
	CHeapSort(void);
	~CHeapSort(void);

	//ʱ�临�Ӷȣ�ƽ��O(NlogN) ���O(NlogN) �O(NlogN)
	//�ռ临�Ӷȣ�O(1)
	//�㷨�ȶ��ԣ����ȶ� ��eg��1 1 ���򽫵�һ��1�͵ڶ���1�����ˣ�
	void sort(ElementType *array, int len);
	void heapify(ElementType *array, int len);
};

