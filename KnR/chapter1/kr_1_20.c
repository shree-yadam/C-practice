/* Program that replaces tabs in the input with proper number of blanks to space to the next tab stop */ 

#include <stdio.h>

#define BUFF_SIZE 100
#define TAB_STOP 4 

int detab(char line[], int limit);

int main()
{
	char line[BUFF_SIZE];
	int len;

	while((len = detab(line, BUFF_SIZE)) > 0)
		printf("%s\n",line);

	return 0;
}

/* detab: reads input line and replaces tab with space */

int detab(char s[], int limit)
{
	int i,j;
	char c;

	for (i=0; i< (limit -1) && (c=getchar()) != EOF && c != '\n'; i++)
	{
		if(c == '\t')
		{
			for ( j = 0; j < TAB_STOP; j++)
				s[i++] = ' ';
			i=i-1;
		}
		else
			s[i] = c;
	}
	if( i == (limit-1))
		s[i] = '\0';
	else if(c == '\n')
	{
		s[i] = c;
		i++;
		s[i] = '\0';
	}

	return i;
}
