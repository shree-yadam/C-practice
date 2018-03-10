/* Program to fold long input lines into two or more shorter lines after the last non blank character occurs beforethe n-th column of input. */

#include <stdio.h>
#define BUFF_SIZE 100 /* Buffer size */
#define FOLD_SIZE 70
#define EXTRA_SPACE (BUFF_SIZE/FOLD_SIZE+1)

int my_getline(char line[], int maxline);


int main()
{
	int len; /* current line length */
	int i, j, count;
	char line[BUFF_SIZE];	/* current input line */
	char folded_line[EXTRA_SPACE];
	while((len = my_getline(line, BUFF_SIZE)) > 0)
	{
		if(len > FOLD_SIZE)
		{
			i = 0;
			j = 0;
			while(line[i] != '\0')
			{
				count = 0;
				while(count++ < FOLD_SIZE)
				{
					folded_line[j++] = line[i++];
				}
				j--;
				while(	folded_line[j--] == ' ');
				j++;
				folded_line[j++] = '\n';
				
			}		
			folded_line[j] = '\0';		
			
			
		}
		printf("%s\n",folded_line);
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

