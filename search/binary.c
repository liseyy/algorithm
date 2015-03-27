#include <stdlib.h>
#include "comm.h"

MAIN

/*binsearch : find x in v[0] <= v[1] <= ... <= v[n-1] */
int binsearch(int x, int v[], int n)
{
	int low, high, mid;

	low = 0;
	high = n - 1;

	while(low <= high)
	{
		mid = (low + high) / 2;
		if(x < v[mid])
		{
			high = mid - 1;
		}
		else if(x > v[mid])
		{
			low = mid + 1;
		}
		else
		{ /*found match*/
			return mid;
		}
	}

	return -1;
}

void search(int arr[], int len)
{
	int val = 2;
	int ret = binsearch(val, arr, len);
	printf("found value %d with index %d\n", val, ret);
}
