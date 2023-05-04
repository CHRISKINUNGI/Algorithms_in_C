#include<stdio.h>

int main()

{
	//Program to convert days to seconds
	int numberOfDays, numberOfSeconds;
	printf("Enter The Number Days:");
        scanf("%d",&numberOfDays);
	
	//there are 86400 seconds in a day
        numberOfSeconds=numberOfDays * 86400;

	printf("%d Days is equvalent To %d seconds",numberOfDays,numberOfSeconds);

	return 0;

}
