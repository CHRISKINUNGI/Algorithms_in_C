#include <stdio.h>
#include <stdlib.h>

// function prototypes
void bubble_sort(int* arr, size_t size);
void swap(int*, int*);
int main()
{
	
	int my_array[]={10,50,45,70,90,12,45,60,20};
	size_t size = sizeof(my_array) / sizeof(my_array[0]); // get array size 
	

	// print to the user the unsorted array
	printf("The unsorted array: ");
	for(int i=0;i<size;i++)
	{
		printf("%d ",my_array[i]);
	}
	// sort the data
	bubble_sort(my_array, size);
	// print again to the user the sorted array
	printf("The sorted array: ");
	for(int i=0;i<size;i++)
	{
		printf("%d ",my_array[i]);
	}
	
	int a = 10, b = 20;
	swap(&a, &b);
	printf("%d %d => (%d %d)", 10, 20,a,b);
}

void swap(int *a, int *b)
{
	/*int temp;
	temp = *a;
	*a = *b;
	*b = temp;
	*/
	
	*a += *b; 
	// a=30 b=20
	*b = *a - *b;
	//10=30-20
	*a = *a - *b;
	//20=30-10
}

void bubble_sort(int* arr, size_t size)
{
	// function defination
	for(int i = 0; i < size; i++)
	{
		for(int j = 0; j < i; j++)
		{
			if(arr[i] < arr[j])
				swap(arr + j, arr + i);
		}
	}
	
}
