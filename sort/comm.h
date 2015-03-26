#ifndef __COMM__H__
#define __COMM__H__

#include <stdio.h>

#define  array_len(array) (sizeof(array) / sizeof(array[0]))
#define MAX_SAMPLE_SZ 100

int sample[MAX_SAMPLE_SZ];// = {2, -1, 8, 3, 5, 20, -100};

void swap(int *x, int *y);
void print(int arr[], int len);
void sort(int arr[], int len);
void do_test();

#endif //__COMM__H__