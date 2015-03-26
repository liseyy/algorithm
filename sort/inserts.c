#include "comm.h"

MAIN

#if 1
void sort(int data[], int sz)
{
	int i, j, k, val;
	int tmp;

	for (i = 1; i < sz; i ++ )
	{
		val = data[i];
		for (j = i - 1; j >= 0; ) 
		{
			if (val < data[j])
			{
				j --;
			}
			else
			{
				tmp = data[j];
				data[j] = val;
				data[j + 1] = tmp;
				for (k = j + 2; k + 1 <= i; k ++) 
				{
					data[k + 1] = data[k];
				}

				break;
			}
		}
	}
}

#else
void sort(int data[], int sz) 
{
	int i, j, t;
	for (i = 1; i < sz; i ++) /*要选择的次数：1~n-1共n-1次*/
	{
		/*
		暂存下标为i的数。注意：下标从1开始，原因就是开始时
		第一个数即下标为0的数，前面没有任何数，单单一个，认为
		它是排好顺序的。
		*/
		t = data[i];
		for (j = i - 1; j >= 0 && t < data[j]; j --) /*注意：j=i-1，j--，这里就是下标为i的数，在它前面有序列中找插入位置。*/
		{
			data[j + 1] = data[j]; /*如果满足条件就往后挪。最坏的情况就是t比下标为0的数都小，它要放在最前面，j==-1，退出循环*/
		}

		data[j + 1] = t; /*找到下标为i的数的放置位置*/
	}
}
#endif 

/*功能：直接插入排序
输入：数组名称（也就是数组首地址）、数组中元素个数
算法思想简单描述：
    在要排序的一组数中，假设前面(n-1) [n>=2] 个数已经是排好顺序的，现在要把第n个数插到前面的有序数中，使得这n个数也是排好顺序的。
    如此反复循，直到全部排好顺序。直接插入排序是稳定的。算法时间复杂度O(n2)--[n的平方]
*/