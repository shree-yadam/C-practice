/* This Program copies its input to its output one character at a time: */

#include <stdio.h>

void main()
{
	int c;
	
	c = getchar();
	while(c != EOF)
	{
		putchar(c);
		c = getchar();
	}
}
