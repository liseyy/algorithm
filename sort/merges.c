#include <stdlib.h>
#include "comm.h"

MAIN

void merge(int *a, int idxa, int idxb, int idxc);
void merge_sort(int *a, int begin, int upend);

void sort(int data[], int len)
{
	merge_sort(data, 0, len);
}


void merge_sort(int *a, int begin, int upend)
{
	int n = upend - begin; /*the number to be sorted*/
	/*The first array is a[idxa] to a[idxb-1]. The second is a[idxb] to a[idxc-1]*/
	int idxa = begin,
	idxb = ((begin + upend) % 2 == 0) ? (begin + upend) / 2 : (begin + upend + 1) / 2,
	idxc = upend;

	if(n < 2)
	{
		printf("The array elements are less than two. No need to sort\n");
		return;
	}
	else if(n == 2)
	{
		merge(a, idxa, idxb, idxc);
	}
	else
	{
		if(idxb-idxa > 1)
			merge_sort(a, idxa, idxb);
		if(idxc-idxb > 1)
			merge_sort(a, idxb, idxc);
		
		merge(a, idxa, idxb, idxc);
	}
}


void merge(int *a, int idxa, int idxb, int idxc)
{
    int i = idxa, j = idxb, k = 0;
    int total = idxc-idxa;
    int *temp = (int *)malloc(sizeof(int) * total);
    if(temp == NULL)
    {
        fprintf(stderr, "malloc error in merge function\n");
        return;
    }

    while(i < idxb && j < idxc)
    {
        if(a[i] < a[j])
            temp[k++] = a[i++];
        else
            temp[k++] = a[j++];
    }

    if(i == idxb)
    {
        while(j < idxc)
            temp[k++] = a[j++];
    }
    else if(j == idxc)
    {
        while(i < idxb)
            temp[k++] = a[i++];
    }

    /*Copy the temp to the sorce array*/
    for(i = 0, k = idxa; i < total; k++, i++)
        a[k] = temp[i];

    free(temp);
}