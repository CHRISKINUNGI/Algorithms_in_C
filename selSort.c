#include <stdio.h>

int main()
{
	int myArray[10] = {10,100,80,90,70,40,50,30,20,45};

	for (int i; i<9; i++)
	{
		int smallest = i;
		
		for(int j=i+1; j<10; j++)
		{
			if(myArray[j] < myArray[smallest])
			
				myArray[smallest] = j;
	
		

		int temp = myArray[smallest];
		myArray[smallest] = myArray[i];
		myArray[i] = temp;
		}

	}


       for(int k=0; k<10; k++)
{
	printf("%d \n",myArray[k]);

}
return 0;

}
