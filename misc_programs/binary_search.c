/* Program to implement binary search on a sorted array of 10 elements */

#include <stdio.h>

int bin_search(int num, int arr[], int elem);

int main()
{
	int i,pos,num;
	int a[10];

	printf("Enter 10 numbers in ascending order\n");
	for (i = 0; i<10; i++)
		scanf("%d",&a[i]);
	printf("Enter number to search\t");
	scanf("%d",&num);

	pos = bin_search(num,a,10);
	
	(pos >=0)? 
		printf("Position of %d in array is %d\n",num,pos) : 
		printf("Couldn't find the number\n");

	return 0;
}

int bin_search(int num, int arr[], int elem)
{
	int mid, high, low;
	high = elem-1;
	low = 0;
	
	while(low <= high)
	{
		mid = (low + high)/2;
		if(num > arr[mid])
			low = mid+1;
		else if(num < arr[mid])
			high = mid - 1;
		else
			return mid;
	}
	return -1;

}
