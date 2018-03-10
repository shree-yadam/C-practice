/* Print all lines longer than 80 */

#include <stdio.h>
#define BUFF_SIZE 100 /* Buffer size */
#define MIN_LEN 80 /* Length of line to me printed */

int my_getline2(char line[], int maxline);


int main()
{
	int len; /* current line length */
	char line[BUFF_SIZE];	/* current input line */

	while((len = my_getline2(line, BUFF_SIZE)) > 0)
		if ( len > MIN_LEN ) 
		{
			printf("%s\n", line);
		}

	return 0;
}

/* getline : read a line into s, return length */
int my_getline2(char s[], int lim)
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
