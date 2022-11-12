#include <stdio.h>
void Count(char str[150])     
{
    int  vCnt=0,cCnt=0;
   char *p=str;
    while(*p!='\0')
    {
        if(*p=='A' ||*p=='E' ||*p=='I' ||*p=='O' ||*p=='U'
        		||*p=='a' ||*p=='e' ||*p=='i' ||*p=='o' ||*p=='u')
            vCnt++;     
        else
            cCnt++;     
  

        p++;
    }

    printf("Number of Vowels in String: %d\n",vCnt);
    printf("Number of Consonants in String: %d",cCnt-1);
    
}
int main()
{
    char str[150];    


    printf("Enter the string: ");
    fgets(str, 150, stdin);
    Count(str);       
    
    return 0;
}