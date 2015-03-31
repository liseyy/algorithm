#include "comm.h"

#define INIT_SZ 7

//int sample[] = {2, -1, 8, 3, 5, 20, -100};
int sample[] = {2, -100, 8, 3, 5, 20, -1};

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
	
	sort(sample, sz);

	printf ("----------\n");
	print(sample, sz);
	printf("\n");
}

void swap(int *x, int *y)
{
   int temp;
   temp = *x;
   *x = *y;
   *y = temp;
}