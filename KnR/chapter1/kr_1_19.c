/* Program that reverses its input a line at a time */

#include <stdio.h>
#define BUFF_SIZE 100 /* Buffer size */

int my_getline(char line[], int maxline);
void reverse(char line[], int len);

int main()
{
	int len; /* current line length */
	char line[BUFF_SIZE];	/* current input line */

	while((len = my_getline(line, BUFF_SIZE)) > 0)
		if ( len > 0 ) 
		{
			reverse(line, len);
			printf("%s\n", line);
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

/* reverse: function to reverse a string s of length len */

void reverse(char s[], int len)
{
	int i, j;
	char temp;
	
	i = 0;
	j = len - 2;
	while(i<j)
	{
		temp = s[i];
		s[i] = s[j];
		s[j] = temp;
		i++;
		j--;
	}
}
