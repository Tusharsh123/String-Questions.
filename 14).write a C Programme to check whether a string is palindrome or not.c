#include <stdio.h>
#include <string.h>

void isPalStrFind(char str[])
{
	int i = 0;
	int len = strlen(str) - 1;
	
	while (len > i)
	{
		if(str[i++] != str[len--])
		{
			printf("\n %s is Not", str);
			return;
		}
	}
	printf("\n %s is a Palindrome String", str);
}
int main()
{
  	char str[100];
 
  	printf("\n Please Enter any Text :  ");
  	gets(str);
  	
  	isPalStrFind(str);	
	
  	return 0;
}
