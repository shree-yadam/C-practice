/* x&=(x-1) deletes rightmost bit */

#include <stdio.h>

int main()
{
	int i;
	printf("Enter an integer\t");
	scanf("%d",&i);

	printf("number %i\n",i);
	printf("x & (x-1)   %i\n",(i&(i-1))	);
	return 0;
}
