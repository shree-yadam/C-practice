#include <stdio.h>

/* Function that returns x with the n bits that begin at position p set to the rightmost n bits of y leaving the other bits unchanged*/
unsigned setbits(unsigned x, int p, int n, unsigned y);

void main()
{
	unsigned x;
	x = setbits(108,4,4,181);
	printf("4 bits of 108 starting at position 4 set to rightmost bits of 181 is %u\n",x);
}

unsigned setbits(unsigned x, int p, int n, unsigned y)
{
	unsigned result;
		
	result =((~(~0<<n)<<(p+1-n))|x)&((((~0<<n)|y)<<(p+1-n))|~(~0<<(p+1-n)));
	return result;
}

