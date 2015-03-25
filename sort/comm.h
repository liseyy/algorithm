#ifndef __COMM__H__
#define __COMM__H__

#include <stdio.h>

#define  array_len(array) (sizeof(array) / sizeof(array[0]))

int sample[] = {2, -1, 8, 3, 5, 20, -100};

extern void swap(int *x, int *y);
extern void print(int arr[], int len);
extern void sort(int arr[], int len);
extern void do_test();

#endif //__COMM__H__