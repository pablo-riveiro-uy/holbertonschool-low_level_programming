#ifndef sorting_h
#define sorting_h
#include <stdio.h>
#include <stdlib.h>


int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
void print_array(int *array, size_t LOW, size_t HIGH);
void print_array_b(int *array, int low, int high);

#endif

