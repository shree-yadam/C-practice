#include <stdio.h>
#include <string.h>

int s_htoi(char *s);

void main()
{
	char arr[10] = "0X23fd";
	int i = s_htoi(arr);
	printf(" Value of %s is %d\n",arr,i);
}

int s_htoi(char *s)
{
	int c = 0;
	int result = 0;
	if((s[0] == '0') && ((s[1] == 'x') || (s[1] == 'X')))
		c = 2;
	while((s[c]!='\0')&& (c < strlen(s)))
	{
		if(s[c] >= '0' && s[c] <= '9') 
		{
			result = 16*result + (s[c] - '0');
		}
		else if(s[c] >= 'a' && s[c] <= 'f') 
		{
			result = 16*result + (s[c] - 'a')+10;
		}
		else if(s[c] >= 'A' && s[c] <= 'F')
		{
			result = 16*result + (s[c] - 'A')+10;
		}
		else
		{
			printf("INVALID INPUT!!\n");
			return 0;
		}
		c++;
	}
	return(result);
}
