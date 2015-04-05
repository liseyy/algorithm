/****************************************************************************/
/*
 *  $Version: 0.1
 *  $Date:    2015-04-05
 *  $Author:  Jeff Chen
 *	$Email:   yonghongchen602@gmail.com  
 *
 */
/****************************************************************************/
#ifndef __COMM__H__
#define __COMM__H__

#include <stdio.h>

#define  array_len(array) (sizeof(array) / sizeof(array[0]))
#define MAX_SAMPLE_SZ 100

int sample[MAX_SAMPLE_SZ];

#define MAIN int main() { do_test(); return 0; }

void swap(int *x, int *y);
void print(int arr[], int len);
void sort(int arr[], int len);
void do_test();

#endif //__COMM__H__