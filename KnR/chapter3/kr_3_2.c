/* Function escape(s,t) that converts characters like newline and tab into visible escape sequences like \n nd \t as it copies the string to to s. Use a switch. Write a function for the other direction as well, convertine escape sequence into the real characters.*/

#include <stdio.h>
#include <string.h>

int escape(char s[], char t[]);
int rev_escape(char s[], char t[]);

int main()
{
	char s[100], t[200];
	char c;
	int i;
	
	i=0;
	printf("Enter string a\n");
	while(((c=getchar()) != EOF) &&(i < 99))
	{
		s[i] = c;
		i++;
	}
	s[i] = '\0';
	if(escape(s,t) <0)
		printf("Error copying a to t\n");
	else
		printf("a: %s\nt: %s\n",s,t);
	
	if(rev_escape(t,s) <0)
		printf("Error copying t to a\n");
	else
		printf("t: %s\na: %s\n",t,s);
	
	return 0;
}

int escape(char s[], char t[])
{
	int len_a, len_t, i, j;

	len_a = strlen(s);
	len_t = strlen(t);
	i = 0;
	j = 0;
	while((s[i] != '\0') && (i <= len_a))
	{
		switch(s[i])
		{
			case '\t':
						t[j++] = '\\';
						t[j] = 't';
						break;
			case '\n':
						t[j++] = '\\';
						t[j] = 'n';
						break;
			case '\b':
						t[j++] = '\\';
						t[j] = 'b';
						break;
			default: 
						t[j] = s[i];
						break;
		}
		i++;
		j++;
	}
	
	if(i != len_a)
		return -1;
	else
		return i;
}

int rev_escape(char s[], char t[])
{
	int len_a, len_t, i, j;

	len_a = strlen(s);
	len_t = strlen(t);
	i = 0;
	j = 0;
	while((s[i] != '\0') && (i <= len_a))
	{
		switch(s[i])
		{
			case '\\':
						switch(s[++i])
						{
							case 't':
										t[j] = '\t';
										break;
							case 'n':
										t[j] = '\n';
										break;	
							case 'b':
										t[j] = '\b';
										break;
							default:
										t[j++] = s[i-1];
										t[j] = s[i];
										break;
						}
						break;
			default: 
						t[j] = s[i];
						break;
		}
		i++;
		j++;
	}
	
	if(i != len_a)
		return -1;
	else
		return i;
}
