/* Program to print Fibonacci series for n numbers */

#include <stdio.h>

int fibonacci(int n);

int main()
{
	int i,j;

	printf("Enter number of fibonacci series element to print\t");
	scanf("%d",&i);
	printf("\n");
	if(i < 0)
	{
		printf("Wrong entry....exiting\n");
		return -1;
	}
	for( j = 0; j < i; j++)
	{
		printf("%d\n",fibonacci(j));
	}
	return 0;
} 

int fibonacci(int n)
{
	if(n == 0)
		return 0;
	if(n == 1)
		return 1;
	return(fibonacci(n-1) + fibonacci(n-2));
}
