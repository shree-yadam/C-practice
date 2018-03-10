/* Program to copy its input to its output, replaceing each string of one or more blanks by a single blank */

#include <stdio.h>
#include <ctype.h>

int main()
{
	char c;
	int count = 0;
	while((c = getchar()) != EOF)
	{
		if(!isspace(c))
		{
			if(count >0)
				count = 0;
			putchar(c);
		}
		else
		{
			if(count ==0)
			{
				count++;
				putchar(c);
			}
		}
	}
	return 0;
}
