#include "comm.h"

#define INIT_SZ 7

int sample[] = {-100, -1, 2, 3, 5, 8, 20};

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
	int sz = INIT_SZ;
	printf ("----------\n");
	print(sample, sz);
	printf("\n");

	search(sample, sz);
}

void swap(int *x, int *y)
{
   int temp;
   temp = *x;
   *x = *y;
   *y = temp;
}
