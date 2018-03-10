/* Program to print a horixontal histogram of the lengths of words in its input.*/

#include <stdio.h>

#define MAX_LENGTH 10
#define IN 1
#define OUT 0

int main()
{
	int wordlength[MAX_LENGTH+1];
	char c;
	int state = OUT;
	int len = 0;
	int i , j;
	for ( i = 0; i <= MAX_LENGTH; i++)
		wordlength[i] = 0;
	while((c= getchar()) != EOF)
	{
		if ((c != ' ') && (c != '\t') && (c != '\n'))
		{
			state = IN;
			len++;
		}
		else if(state == IN)
		{
			state = OUT;
			wordlength[len]++;
			len = 0;
		}
	}
	for(i = 1; i < MAX_LENGTH+1; i++)
	{
		for ( j = 0; j < wordlength[i]; j++)
			printf("* ");
		printf("\n");
	}	
	
	 
	return 0;
}
