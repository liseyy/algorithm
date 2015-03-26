#include "comm.h"

MAIN

void sort(int a[], int n)
{
	int i, j;
	int temp;
	int	gap = n/2;

	int cnt = 0;

	while (gap > 0)
	{
		for (i = gap; i < n; i ++)
		{
			for(j = i - gap; j >= 0; j --)
			{
				++ cnt;
				if(a[j + gap] < a[j])
				{
					temp = a[j + gap];
					a[j + gap] = a[j];
					a[j] = temp;
				}
			}
		}
		gap = gap/2;
	}
	printf("counter: %d\n", cnt);
}

/*
O(n**1.2)
希尔排序(Shell Sort)是插入排序的一种 是针对直接插入排序算法的改进

算法先将要排序的一组数按某个增量gap分成若干组，每组中
记录的下标相差gap.对每组中全部元素进行排序，然后再用一个较小的增量
对它进行，在每组中再进行排序。当增量减到1时，整个要排序的数被分成
一组，排序完成。
*/ 


