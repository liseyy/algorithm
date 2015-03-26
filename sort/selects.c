#include "comm.h"

MAIN

void sort(int data[], int sz)
{
	int i = 0, j = 0, min = 0;
	for (; i < sz - 1; i ++) 
	{
		min = i;
		for (j = i + 1; j < sz; j ++)
		{
			if (data[i] > data[j])
				min = j;
		}

		if (min != i)
			swap(&data[min], &data[i]);
	}
}

/*
功能：选择排序
输入：数组名称（也就是数组首地址）、数组中元素个数
算法思想简单描述：
     在要排序的一组数中，选出最小的一个数与第一个位置的数交换；
     然后在剩下的数当中再找最小的与第二个位置的数交换，如此循环到倒数第二个数和最后一个数比较为止。选择排序是不稳定的。算法复杂度O(n2)--[n的平方]

*/