#include <stdio.h>
#include <string.h>

int Count_AllCharcater(char str[], char ch)
{
	int i, Count;
	Count = 0;
	
  	for(i = 0; i <= strlen(str); i++)
  	{
  		if(str[i] == ch)  
		{
  			Count++;
 		}
	}
	return Count;
}
int Count_AllCharcater(char str[], char ch);
 
int main()
{
  	char str[100], ch;
  	int Count;
  	Count = 0;
 
  	printf("\n Please Enter any String :  ");
  	gets(str);
  	
  	printf("\n Please Enter the Character that you want to Search for :  ");
  	scanf("%c", &ch);
  	
  	Count = Count_AllCharcater(str, ch);
  	
	printf("\n The Total Number of times '%c' has Occured = %d ", ch, Count);
	
  	return 0;
}