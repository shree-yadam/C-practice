/*Left rotate array a of size n by d places */

#include <stdio.h>

int gcd(int a, int b);
void rotate_array_left(int a[], int n, int d);
void print_array(int a[], int n);

int main()
{
	int a[12] = {1,2,3,4,5,6,7,8,9,10,11,12};
	int d = 3;
	
	print_array(a,12);
	rotate_array_left(a,12,d);
	print_array(a,12);
	return 0;
}

void print_array(int a[], int n)
{
	int i;
	for(i =0; i <n; i++)
		printf("%d\t",a[i]);
	printf("\n");
}

void rotate_array_left(int a[], int n, int d)
{
	int temp, j, k, i;


	for(i=0;i<gcd(d,n);i++)
	{
		temp = a[i];
		j = i;

		while(1)
		{
			k = j + d;
			if(k >= n)
				k = k-n;
			if(k == i)
				break;
			a[j] = a[k];
			j = k;	
		}
		a[j] = temp;
	}
}

int gcd(int a, int b)
{
	if(b==0)
		return a;
	else
		return gcd(b, a%b);
}
