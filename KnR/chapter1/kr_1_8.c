/* Program to count blanks, tabs and newlines */

#include <stdio.h>

int main()
{
	char c;
	int blank, tab, newline;
	blank = 0;
	tab = 0;
	newline = 0;
	while((c= getchar()) != EOF)
	{
		if(c == ' ')
			blank++;
		else if(c == '\t')
			tab++;
		else if (c == '\n')
			newline++;
		
	}
	printf("Number of blanks spaces = %d\n", blank);
	printf("Number of tabs = %d\n", tab);
	printf("Number of newlines = %d\n", newline);

	return 0;
}
