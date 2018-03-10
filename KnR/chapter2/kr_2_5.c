#include <stdio.h>

int any(char *s1, char *s2);

void main()
{
	char s1[] = "Shree Devi YAdam";
	char s2[] = "bunk";
	printf("%d\n", any(s1,s2));
}

int any(char *s1, char *s2)
{
	int i , j;
	if(s1 != NULL && s2 != NULL)
	{
		for( i = 0; s1[i] != '\0'; i++)
			for( j = 0; s2[j] != '\0'; j++)
				if(s1[i] == s2[j])
					return i;
		
	}
	return -1;
}
