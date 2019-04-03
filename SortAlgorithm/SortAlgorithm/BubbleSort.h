/*!
* \brief ����������ð������
* 
* �ظ����߷ù�Ҫ��������У�һ�αȽ�����Ԫ�أ�������ǵ�˳�����Ͱ����ǽ�������
* �߷����еĹ������ظ��ؽ���ֱ��û������Ҫ������Ҳ����˵�������Ѿ�������ɡ�
* 
* \author Lee
* \date 2019.04.03
*/
#pragma once
#include "sortoperation.h"
class CBubbleSort :
	public CSortOperation
{
public:
	CBubbleSort(void);
	~CBubbleSort(void);

	//ʱ�临�Ӷȣ�ƽ��O(N^2) ���O(N^2) �O(N^2)
	//�ռ临�Ӷȣ�O(1)
	//�㷨�ȶ��ԣ��ȶ�
	void sort(ElementType *array, int len);
};

