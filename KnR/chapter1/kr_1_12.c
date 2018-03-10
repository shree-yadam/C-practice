/* Program that prints its input one word per line */

#include <stdio.h>
#define YES 1
#define NO 0
int main()
{
	char c;
	int inword;
	inword = NO;
	while((c = getchar()) != EOF)
	{
		if((c == ' ') || (c == '\t') || (c == '\n'))
		{
			if(inword == YES)
			{
				putchar('\n'); 
				inword = NO;
			}
		}
		else 
		{
			inword = YES;
			putchar(c);
		}
	}
		
	return 0;
}
