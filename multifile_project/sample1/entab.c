/* Program that replaces tabs in the input with proper number of blanks to space to the next tab stop */ 

#include <stdio.h>

#define TAB_STOP 4

/* entab: reads input line and replaces spaces with tabs and spaces */

int entab(char s[], int limit)
{
	int i,j, count, tabs, spaces;
	char c;

	for (i=0; i< (limit -1) && (c=getchar()) != EOF && c != '\n'; i++)
	{
		if(c == ' ')
		{
			count = 0;
			do{
				count++;
	
			}while((c = getchar()) == ' ');
			tabs = count / TAB_STOP;
			spaces = count % TAB_STOP;
			printf("count %d\ntabs %d\nspaces %d\n",count,tabs,spaces);
			for ( j = 0; j < tabs; j++)
				s[i++] = '\t';
			for ( j = 0; j < spaces; j++)
				s[i++] = ' ';
			s[i] = c;
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
