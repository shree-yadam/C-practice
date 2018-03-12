/* Program to rotate array left by d elements */
#include <stdio.h>

void rotate(int ar[], int d, int n);

int main()
{
	int ar[10];
	int d = 4;
	int i;

	printf("Enter 10 integers\n");
	for(i=0; i<10; i++)
		scanf("%d",&ar[i]);
	
	printf("Enter number of places to rotate\t");
	scanf("%d",&d);

	rotate(ar,d,10);

	printf("Left rotataed array\n");
	for(i=0; i<10; i++)
		printf("%d\t",ar[i]);
	printf("\n");

	return 0;
}

void rotate(int ar[], int d, int n)
{
	int i, temp;
	i = 0;

	while(d>0)
	{
		temp = ar[0];
		for(i=0; i<n-1;i++)
			ar[i] = ar[i+1];
		ar[i] = temp;
		d--;
	}
}	
