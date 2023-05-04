// lemme try something here

#include <stdio.h>
#include <stdlib.h>

void selection_sort(int* arr, size_t size)
{
	int smallest = arr[0];
	int sorted = 0;
	int unsorted = 0;
	// outer for loop for looping allthrought the elements
	for(int i = 0; i < size; i++)
	{
		// inner loop for finding the smallest element
		for(int j = i + 1; j < size; j++)
		{
			if(arr[j] <= smallest)
			{
				// set the smallest to that address
				// store the address of j
				unsorted = j;
				smallest = arr[j];
			}
		}
		
		// swap the smallest and the sorted
		swap(arr + i, arr + unsorted);
		
		// tuende tukalale/........,..????????
	}
}

void swap(int *a, int *b)
{
	*a += *b; 
	*b = *a - *b;
	*a = *a - *b;
}