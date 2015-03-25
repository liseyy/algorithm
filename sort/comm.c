#include "comm.h"

void print(int arr[], int len)
{
	int i = 0;
	for (; i < len; i ++) 
	{
		printf ("%d ", arr[i]);
	}
}

void do_test()
{
	// int sz = sizeof(sample)/sizeof(sample[0]);
	// printf ("----------\n");
	// print(sample, sz);
	// printf("\n");
	
	// sort(sample, sz);

	// printf ("----------\n");
	// print(sample, sz);
	// printf("\n");
}

void swap(int *x, int *y)
{
   int temp;
   temp = *x;
   *x = *y;
   *y = temp;
}