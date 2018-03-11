/* Recursive function for factorial */

#include <stdio.h>

int fact(int n);

int main()
{
	int x;
	int f;

	printf("Enter number\t");
	scanf("%d",&x);
	f = fact(x);
	printf("Factorial of %d = %d\n", x, f);
	return 0;
}

int fact(int n)
{
	int result = 1;
	if(n>1)
	{
		result = n * fact(n-1);
		return result;
	}
	else
		return 1;
}	
