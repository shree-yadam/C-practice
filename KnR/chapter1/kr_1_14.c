/* Program to print a histogram of the frequencies of different characters in its input */

#include <stdio.h>

int main()
{
	int freq[256];
	char c;
	int i,j;
	
	for ( i = 0; i < 256; i++)
		freq[i] = 0;

        	
	while((c = getchar()) != EOF)
	{
		freq[c]++;
	}

	for (i = 0; i < 256; i++)
	{
		printf("%c\t",i);
		for ( j = 0; j < freq[i]; j++)
			printf("* ");
		printf("\n");
	}
	
	return 0;
}
