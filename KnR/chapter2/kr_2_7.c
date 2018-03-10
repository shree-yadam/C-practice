#include <stdio.h>

/* function that returns x with the n bits starting at position p inverted */
unsigned invert(unsigned x, int p, int n);

void main()
{
	unsigned result = invert(108,4,3);
	unsigned i = 108;
	printf("3 bits of %x starting  at position 4 inverted is %x\n",i, result);
}

unsigned invert(unsigned x, int p, int n)
{
	unsigned result;
	result = (~(~0<<n)<<(p+1-n))^x;
	return result;
}
