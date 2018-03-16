/*Program to search anumber in an array linearlky */

#include <stdio.h>

/* Function for linear search of number n in array a of size max */
int linear_search(int a[], int max, int n)
{
	int i;
	for(i=0; i<max; i++)
		if(a[i] == n)
			return i;
	
	return -1;
}
	
/* Function to print array */
void print_array(int a[], int max)
{
	int i;
	for( i = 0 ; i<max; i++)
		printf("%d ",a[i]);
	printf("\n");
}

/*Function to read array input */
void read_array(int a[], int max)
{
	int i;
	printf("Enter %d integers\n",max);
	for(i = 0; i < max ; i++)
		scanf("%d",&a[i]);
}

int main()
{
	int a[10];
	int n;
	int pos =-1;
	int size = sizeof(a)/sizeof(a[0]);
	
	printf("Size of array %d\n",size);	
	
	read_array(a,size);

	printf("Enter number to search\t");
	scanf("%d",&n);

	print_array(a,size);	
	
	pos = linear_search(a,size,n);
	
	if(pos >=0)
		printf("postion where %d was found is %d\n",n, pos);
	else
		printf("Value not found\n");
	return 0;
}	
