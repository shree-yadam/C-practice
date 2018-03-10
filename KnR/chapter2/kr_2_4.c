#include <stdio.h>
#include <string.h>

/* squeeze : delete each character in s1 that matches any character in string s2 */

void squeeze(char *s1, char *s2);

void main()
{

	char s1[100] = "Shree devi Yadam";
	char s2[10] = "exit";
	squeeze(s1,s2);
	printf("%s\n",s1);
}

void squeeze(char *s1, char *s2)
{
	int i, j, k;
	if(s1 != NULL && s2 != NULL)
	{
		for ( k = 0; s2[k] != '\0'; k++)
		{
			for( i = j = 0; s1[i] != '\0'; i++)
				if(s1[i] != s2[k])
					s1[j++] = s1[i];
			s1[j] = '\0';
		}
	}
	    
}
