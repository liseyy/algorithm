#include <stdio.h>

int sample[] = {2, -1, 8, 3, 5, 20, -100};

void print(int arr[], int len)
{
	int i = 0;
	for (; i < len; i ++) {
		printf ("%d ", arr[i]);
	}
}

extern void sort(int arr[], int len);




