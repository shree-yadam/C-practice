/* Longest line program to print correct length of arbitrary long input lines, and as much as possible of the text */

#include <stdio.h>
#define BUFF_SIZE 100 /* Buffer size */

int my_getline(char line[], int maxline);
void copy(char to[], char from[]);

/* print the longest input line */

int main()
{
	int len; /* current line length */
	int max; /* maximum length seen so far*/
	char line[BUFF_SIZE];	/* current input line */
	char longest[BUFF_SIZE]; /* longest line saved here */

	max = 0;
	while((len = my_getline(line, BUFF_SIZE)) > 0)
		if ( len > max ) 
		{
			max = len;
			copy(longest, line);
		}
	if ( max > 0) /* there was a line */
	{
		printf("Longest line length is %d\n", max);
		printf("Lenght over the buffer length %d\n", max - BUFF_SIZE);
		printf("%s\n",longest);
	}

	return 0;
}

/* getline : read a line into s, return length */
int my_getline(char s[], int lim)
{
	int c , i;
	
	for ( i=0; i< lim - 1 && ( c = getchar()) != EOF && c != '\n'; ++i)
		s[i] = c;
	if (i == (lim-1))
	{
		s[i] = '\0';
		while((c = getchar())	!= '\n' && c != EOF)
			i++;
	}
	else
	{
		if( c == '\n')
		{
			s[i] = c;
			++i;
		}
		s[i] = '\0';
	}
	return i;
}

/* copy: copy 'from' into 'to'; assume to is bug enough */
void copy(char to[], char from[])
{
	int i;
	
	i = 0;
	while((to[i] = from[i]) != '\0')
		++i;
}
