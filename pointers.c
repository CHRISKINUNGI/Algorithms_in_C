#include<stdio.h>
#include<stdlib.h>

/**
 * main - Entry point to the program
 *
 * Return: program termination
 *
 */

int main(void)
{
	int a;
	a = 5;

	int *ptr = &a;
	*ptr = 10;


	char n = a + '0';

	printf("%d is stored in %p", a, ptr);
	return (0);
}
