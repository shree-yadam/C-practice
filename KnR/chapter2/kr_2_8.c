#include <stdio.h>

/* Function that returns the value of integer x rotated to the right by n positions */
unsigned rightrot(unsigned x, unsigned n);

void main()
{
	unsigned num = 0x6d;
	unsigned result = rightrot(num,3);
	printf("Right rotated value of %x by 3 places is %x \n", num, result);
}

unsigned rightrot(unsigned x, unsigned n)
{
	int i;
	int size = sizeof(x)*8;
	for( i = 0; i < n ; i++)
	{
		x = ((x&1)<<(size-1)) ^(x>>1);
	}	
	return x;
}
