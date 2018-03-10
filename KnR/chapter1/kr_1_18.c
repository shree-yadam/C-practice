/* Program to print trailing blanks and tabs from each line of input and yto delete entirely blank lines */

#include <stdio.h>
#define BUFF_SIZE 100 /* Buffer size */

int trimmed_line(char line[], int maxline);


int main()
{
	int len; /* current line length */
	char line[BUFF_SIZE];	/* current input line */

	while((len = trimmed_line(line, BUFF_SIZE)) > 0)
		if ( len > 1 ) 
		{
			printf("%s\n",line);
		}

	return 0;
}

/* trimmed line : remove all trailing spaces and tabs */
int trimmed_line(char s[], int lim)
{
	int c , i;
	
	for ( i=0; i< lim - 1 && ( c = getchar()) != EOF && c != '\n'; ++i)
	{	
		s[i] = c;
	}
	i--;
	while((s[i] == ' ') || (s[i] == '\t'))
		i--;
	i++;
	if( c == '\n')
	{
		s[i] = c;
		++i;
	}
	s[i] = '\0';
	
	return i;
}

