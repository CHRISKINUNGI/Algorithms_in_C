//sellection sort

#include <stdio.h>
#include <stdlib.h>
#include "sort.h" // contains swap and selection_sort


int main()
{
	// define an array
	int my_array[]={10,50,45,70,90,12,45,60,20};

	
	// get the size
	size_t size = sizeof(my_array) / sizeof(my_array[0]); // get array size
	
	// print the unsorted
	printf("The unsorted array: ");
	for(int i=0;i<size;i++)
	{
		printf("%d ",my_array[i]);
	}
	// sort it
	selection_sort(my_array,size);
	
	
	
	// print the sorted
	printf("The sorted array: ");
	for(int i=0;i<size;i++)
	{
		printf("%d ",my_array[i]);
    }
	
return 0;	
}
