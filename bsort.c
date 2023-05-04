#include <stdio.h>

int main ()
{
	int myArray[10]={10,100,80,90,70,40,50,30,20,45};
	for(int i=0; i<11; i++)
	{
		for(int j=i+1;j<11;j++)
		{
			if( myArray[i]> myArray[j])
			{
				int virtual = myArray[i];
				myArray[i] = myArray[j];
				myArray[j] = virtual;
			}

		}

	}
	
	for(int i=0; i<10; i++)
	{
		printf("%d",myArray[i]);
	}			

				
	return 0;

	}
		
