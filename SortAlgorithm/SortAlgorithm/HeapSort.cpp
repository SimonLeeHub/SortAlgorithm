#include "stdafx.h"
#include "HeapSort.h"


CHeapSort::CHeapSort(void)
{
	description = "\n\n\n-------- Heap Sort --------\n";
}


CHeapSort::~CHeapSort(void)
{
}

void CHeapSort::sort(ElementType *array, int len)
{
	ElementType tempE;
	for(int i=len-1; i>0; i--)
	{
		// 构建大顶堆，即当前节点关键值大于等于后代节点关键值
		// 这样大关键值的元素依次被放入数组末端，最后得到的序列就是从小到大的序列
		heapify(array, i+1);
		// 每次交换堆顶元素和堆末尾的元素，并将堆的大小减1
		// i为堆末节点的索引，由于i从0开始，所以堆的大小即为i+1
		tempE = array[0];
		array[0] = array[i];
		array[i] = tempE;
	}
}

void CHeapSort::heapify(ElementType *array, int len)
{
	// len-1为最后一个元素的数组编号，再减1除以2即为末节点的父节点
	// 然后从末节点的父节点往前，逐个节点的下滤
	for(int i = (len-2)/2;i >= 0; i--)
	{
		int child;
		ElementType tempE;
		// 循环继续下去的前提条件是当前节点有左儿子，否则已经下滤到叶子节点，无需继续，循环终止
		for(int j=i;2*j+1<=(len-1);j=child)
		{
			// 先获取左儿子
			child = 2*j+1;
			// 先判断是否有右儿子，如果有，再比较左右儿子的大小
			if((child+1 <= len-1 )&&(array[child+1]>array[child])) child++;
			if(array[j] < array[child]) 
			{
				tempE = array[j];
				array[j] = array[child];
				array[child] = tempE;
			}
			// 注意此处的break，当当前节点已经不小于两个子节点时，即可跳出本次下滤
			// 因为我们是从倒数第二层开始下滤的，以后向上的每一层，如果当前节点不小于两个子节点，
			// 那么它一定不小于它所有的后代
			else
			{
				break;
			}
		}
	}
}
