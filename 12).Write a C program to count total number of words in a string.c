#include<stdio.h>
int countWords(const char *s){

	int wordCount=0;
	int len = 0;

	if(!s || !*s)
		return 0;

	
	while(*s){

		
		if(*s == ' ')
		{
			len = 0;
		}else if(++len == 1)
		{
			
			++wordCount;
		}

		++s;
	}

	return wordCount;
}

int main(){

	int count = 0;
	char str[100];	
	printf("Enter String: ");

	
	gets(str);

	
	count = countWords(str);
	printf("Number of words: %d",count);

	return 0;
}

