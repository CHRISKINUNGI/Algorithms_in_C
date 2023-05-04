#include <stdio.h>

int binarySearch(int myArray, int element, int mid)
{
	if(element==mid)
	return mid;
	
	else if(element>mid)
	return binarySearch(myArray, element, mid+1);
	
	else if(element<mid)
	return binarySearch(myArray, element, mid-1);
}

int main()
{
	
	int myArray[10]={10,20,30,40,50,60,70,80,90,100};
	int size= sizeof myArray;
	int leftIndex=0;
	int mid = leftIndex + (size - 1) / 2;	
	printf(" %d ",binarySearch(*myArray, 70, mid));
}