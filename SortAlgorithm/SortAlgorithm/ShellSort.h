/*!
* \brief ����������ϣ������
* 
* �Ǽ򵥲�������ĸĽ��棬�����������Ĳ�֮ͬ�����ڣ��������ȱȽϾ����Զ��Ԫ�ء� 
* 
* \author Lee
* \date 2019.04.03
*/
#pragma once
#include "sortoperation.h"
class CShellSort :
	public CSortOperation
{
public:
	CShellSort(void);
	~CShellSort(void);
	//ʱ�临�Ӷȣ�ƽ��O(N^1.3) ���O(N) �O(N^2)
	//�ռ临�Ӷȣ�O(1)
	//�㷨�ȶ��ԣ����ȶ� ��eg��10 80 80 20 ��һ�������ѵ�һ��80�ŵ��ڶ���80�ĺ��棩
	void sort(ElementType *array, int len);
};

