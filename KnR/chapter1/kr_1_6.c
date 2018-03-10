#include <stdio.h>

void main()
{
	int result;
	char c;
	while(result = ((c=getchar()) != EOF))
	{
		printf("value of getchar() != EOF is %d\n",result);
	}
	printf("value of getchar() != EOF is %d\n",result);
}
