/* Write a fimction to convert uppercase letters to lower case letters using conditional expression */

#include <stdio.h>

char lower(char c);

int main()
{
	char c;

	printf("Enter characters \n");
	
	while((c=getchar()) != EOF)
	{
		c = lower(c);
		printf("%c",c);
	}
	printf("\n");
	return 0;
}

char lower(char c)
{
	return (((c>='A') && (c<='Z'))? (c+'a'-'A') : c);
}
