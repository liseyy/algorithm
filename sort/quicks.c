#include "comm.h"

MAIN

static int choose_pivot(int i, int j )
{
   return ((i + j) / 2);
}

#if 0
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
				i ++;
			while((j >= m) && (list[j] > key))
				j --;
			if( i < j) 
				swap(&list[i], &list[j]);
		}
		swap(&list[m], &list[j]);

		quicksort(list, m, j - 1);
		quicksort(list, j + 1, n);
	}
}
#else
static void quicksort(int list[], int m, int n)
{
	int key, low, high;
	if (m < n) 
	{
		key = list[m];
		low = m, high = n;

		while (low < high) 
		{
			while (low < high && list[high] >= key) 
			{
				high --;
			}
			if (low < high) 
			{
				list[low] = list[high];
				low ++;
			}

			while(low < high && list[low] < key) 
			{
				low ++;
			}
			if (low < high) 
			{
				list[high] = list[low];
				high --;
			}
		}
		list[low] = key;
		quicksort(list, m, low - 1);
		quicksort(list, low + 1, n);
	}
}
#endif 

void sort(int arr[], int len)
{
	quicksort(arr, 0, len - 1);
}

#if 0

/*
最理想情况算法时间复杂度O(nlog2n)，最坏O(n2)
在快速排序算法中，使用了分治策略。首先把序列分成两个子序列，递归地对子序列进行排序，直到整个序列排序结束。
步骤如下：
在序列中选择一个关键元素做为轴；
对序列进行重新排序，将比轴小的元素移到轴的前边，比轴大的元素移动到轴的后面。在进行划分之后，轴便在它最终的位置上；
递归地对两个子序列进行重新排序：含有较小元素的子序列和含有较大元素的子序列。

功能：快速排序
输入：数组名称（也就是数组首地址）、数组中起止元素的下标
算法思想简单描述：
     快速排序是对冒泡排序的一种本质改进。它的基本思想是通过一趟扫描后，使得排序序列的长度能大幅度地减少。在冒泡排序中，一次扫描只能确保最大数值的数移到正确位置，而待排序序列的长度可能只减少1。快速排序通过一趟扫描，就能确保某个数（以它为基准点吧）的左边各数都比它小，右边各数都比它大。然后又用同样的方法处理它左右两边的数，直到基准点的左右只有一个元素为止。它是由 C.A.R.Hoare于1962年提出的。显然快速排序可以用递归实现，当然也可以用栈化解递归实现。下面的函数是用递归实现的，有兴趣的朋友可以改成非递归的。快速排序是不稳定的。最理想情况算法时间复杂度O(nlog2n)，最坏O(n2)
=====================================================
void quick_sort(int *x, int low, int high)
{
    int i, j, t;
    if (low < high) /*要排序的元素起止下标，保证小的放在左边，大的放在右边。这里以下标为low的元素为基准点*/
    {
        i = low;
        j = high;
        t = *(x+low); /*暂存基准点的数*/
        while (i<j) /*循环扫描*/
        {
            while (i<j && *(x+j)>t) /*在右边的只要比基准点大仍放在右边*/
           {
                j--; /*前移一个位置*/
           }
           if (i<j)
           {
                *(x+i) = *(x+j); /*上面的循环退出：即出现比基准点小的数，替换基准点的数*/
                i++; /*后移一个位置，并以此为基准点*/
            }
           while (i<j && *(x+i)<=t) /*在左边的只要小于等于基准点仍放在左边*/
           {
                i++; /*后移一个位置*/
           }
           if (i<j)
           {
                *(x+j) = *(x+i); /*上面的循环退出：即出现比基准点大的数，放到右边*/
                 j--; /*前移一个位置*/
           }
        }
        *(x+i) = t; /*一遍扫描完后，放到适当位置*/
        quick_sort(x,low,i-1); /*对基准点左边的数再执行快速排序*/
        quick_sort(x,i+1,high); /*对基准点右边的数再执行快速排序*/
    }
}

*/

#endif 


