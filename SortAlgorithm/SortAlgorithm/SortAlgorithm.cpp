// SortAlgorithm.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include "InsertionSort.h"
#include "ShellSort.h"
#include "SelectionSort.h"
#include "HeapSort.h"
#include "BubbleSort.h"
#include "QuickSort.h"
#include "MergeSort.h"
#include "CountingSort.h"
#include "BucketSort.h"
#include "RadixSort.h"

int _tmain(int argc, _TCHAR* argv[])
{
	CSortOperation *pSort[10];
	pSort[0] = new CInsertionSort;
	pSort[1] = new CShellSort;
	pSort[2] = new CSelectionSort;
	pSort[3] = new CHeapSort;
	pSort[4] = new CBubbleSort;
	pSort[5] = new CQuickSort;
	pSort[6] = new CMergeSort;
	pSort[7] = new CCountingSort;
	pSort[8] = new CBucketSort;
	pSort[9] = new CRadixSort;

	for(int i=0;i<10;i++)
	{
		if(pSort[i])
		{
			std::cout<<pSort[i]->description;
			std::cout<<"Array to be sorted: ";
			ElementType array[] = {13, 4, 2, 80, 6, 39, 80, 10, 131, 13, 190, 35, 40, 101, 182};
			for(int j=0;j<sizeof(array)/sizeof(array[0]);j++) std::cout<<array[j]<<" ";
			std::cout<<std::endl;
			pSort[i]->sort(array, sizeof(array)/sizeof(array[0]));
			std::cout<<"Array after sorted: ";
			for(int j=0;j<sizeof(array)/sizeof(array[0]);j++) std::cout<<array[j]<<" ";
			std::cout<<std::endl;
		}
	}
	std::cout<<"\n\n\nSort algorithm has been tested, press any key to exit...\n";
	getchar();
	return 0;
}

