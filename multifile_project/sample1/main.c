/* Program that replaces tabs in the input with proper number of blanks to space to the next tab stop */ 

#include <stdio.h>

#define BUFF_SIZE 100

extern int entab(char line[], int limit);

int main()
{
	char line[BUFF_SIZE];
	int len;

	while((len = entab(line, BUFF_SIZE)) > 0)
		printf("%s\n",line);

	return 0;
}

