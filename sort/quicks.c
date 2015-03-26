#include "comm.h"

MAIN

static int choose_pivot(int i, int j )
{
   return((i+j) /2);
}

static void quicksort(int list[], int m, int n)
{
	int key, i, j, k;
	int temp;
	if( m < n)
	{
		k = choose_pivot(m, n);
		swap(&list[m], &list[k]);
		key = list[m];
		i = m + 1;
		j = n;

		while(i <= j)
		{
			while((i <= n) && (list[i] <= key))
				i++;
			while((j >= m) && (list[j] > key))
				j--;
			if( i < j) 
				swap(&list[i], &list[j]);
		}
		swap(&list[m], &list[j]);

		quicksort(list, m, j-1);
		quicksort(list, j+1, n);
	}
}

void sort(int arr[], int len)
{
	quicksort(arr, 0, len - 1);
}

/*
最理想情况算法时间复杂度O(nlog2n)，最坏O(n2)
在快速排序算法中，使用了分治策略。首先把序列分成两个子序列，递归地对子序列进行排序，直到整个序列排序结束。
步骤如下：
在序列中选择一个关键元素做为轴；
对序列进行重新排序，将比轴小的元素移到轴的前边，比轴大的元素移动到轴的后面。在进行划分之后，轴便在它最终的位置上；
递归地对两个子序列进行重新排序：含有较小元素的子序列和含有较大元素的子序列。
*/


