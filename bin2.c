// binary.c
// Implements the binary search algorithm in c

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
// create function prototypes

// Prevents access to -ve elements in the array
//typedef unsigned long size_t;

int* binary_search(int *arr, size_t size, int element); 	// well define it at the end of this file

// why are you pointing to the memory location of the array?

// its basically the same as
//int binary_search(int arr[], size_t size,int element); // this will result to a pointer decomposition


int main()
{
	// in a binary search the elements must be ordered
	//so
	
	int arr[] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
	
	int* exists = binary_search (arr, (sizeof(arr)/ sizeof(arr[0])),120);
	
	if(exists == NULL)
	{
		printf(" -1 \n\a");
		return 127;
	}
	
	printf("ELEMENT FOUND at index: %ld!!!\n\a", exists - arr);
	
	return 0;
}

// function definition
int*  binary_search(int *arr, size_t size, int element)
{
	// 2 pointers
    int *result = NULL;
	int mid = (size/2);
	int* first =  arr;
	int* last = arr + mid;
	
	if (element < last[0])
	{
		// search the first element
		result = binary_search(first,mid,element);
	}
	else if(element == last[0])
		return last;
    else if(size == 1)
        return NULL;
	else
		result = binary_search(last, size - mid, element);
	
	return result;
}
