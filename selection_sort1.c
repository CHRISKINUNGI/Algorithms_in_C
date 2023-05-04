#include <stdio.h>
#include <stdlib.h>

void selection_sort(int *arr, size_t);
void swap (int first_number, int last_number);

int main()
{
    int arr[] = {10,20,30,50,55,30,10};

    // to find size
    size_t size = sizeof (arr)/sizeof(arr[0]);

    selection_sort(arr,size);
     for (int i=1; i<size; i++)
     {
     	  printf("ordered: %d\n",arr[i] );
	 }

  
    
    return 0;
}

void selection_sort (int *arr,size_t size)
{
	for (int i=0; i<size; i++)
	{
		int position = i;
		for (int j=i+1; i<size; i++)
		
			//finding the smallest number in the unsorted array
		    if (arr[j] < arr[position] ) // what did you mean by doiing this?
			//	position = j;	// should this line
		    swap(arr[position],arr[j]);	 // and this one be executed if the if condition is true?
		
		swap(arr[position],arr[i]);	
	}
	
	// siezi kusikia

}

void swap(int first_number, int last_number)
{
	 first_number+=  last_number;
	 last_number= first_number - last_number;
	 first_number= first_number - last_number;
}