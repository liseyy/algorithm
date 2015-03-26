#include "comm.h"

MAIN

void sort(int data[], int sz)
{
	int i = 0, j = 0;
	int tmp;	
	int cnt = 0;

	for(i = 0; i < sz; i ++) 
	{	
		for (j = i + 1; j < sz; j ++) 
		{				
			++ cnt;
			if (data[i] > data[j]) 
			{
				swap(&data[i], &data[j]);
			}	
		}

		printf("%d*****", i);
		print(data, sz);
		printf("\n");
	}
}


/*

冒泡排序：假设要求升序排列数组A[0...N-1]，则两两比较，如果前面的数据比后面的小，则交换两个数据的位置，这样一轮下来，最大的数据就会到达A[N-1]；之后比较A[0...N-2]序列，第二大的数据便会到达A[N-2].
根据以上描述可知，冒泡排序是稳定的。算法时间复杂度为O(n2).


for(i=1;i<N-1;i++)
    {
        for(j=0;j<N-i;j++)
        {
            if(a[j]>a[j+1])
            {
                tmp=a[j];
                a[j]=a[j+1];
                a[j+1]=tmp;
            }
        }
    }

*/
