/*!
* \brief �ǱȽ�������Ͱ����
* 
* �����������ݷ��Ӿ��ȷֲ������Ա任��0~1���������ݷֵ�����������Ͱ�
* ÿ��Ͱ�ٷֱ������п�����ʹ�ñ�������㷨�����Եݹ鷽ʽ����ʹ��Ͱ��������ţ� 
* 
* \author Lee
* \date 2019.04.03
*/
#pragma once
#include "sortoperation.h"
#include <vector>
typedef std::vector<ElementType> EVector;
class CBucketSort :
	public CSortOperation
{
public:
	CBucketSort(void);
	~CBucketSort(void);

	//ʱ�临�Ӷȣ�ƽ��O(N+k) ���O(N) �O(N^2)
	//�ռ临�Ӷȣ�O(N+k)
	//�㷨�ȶ��ԣ��ȶ�
	void sort(ElementType *array, int len);
};

