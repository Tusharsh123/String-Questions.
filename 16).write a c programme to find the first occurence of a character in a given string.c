#include <stdio.h>
#include <string.h>
  
int check(char *s,char c)
{
    int i,k=0;
      for(i=0;s[i];i++)  
    {
        if(s[i]==c)
        {
          k=1;
          break;
        }
    }
   if(k)
   return i;
   else
   return -1;
     
       
 }
int main()
{
  
   char s[1000],c;  
    int n;
  
    printf("Enter  the string : ");
    gets(s);
    printf("Enter character to be searched: ");
    c=getchar();
    n=check(s,c);
  
      
    if(n>-1)
        printf("character  %c  is first occurrence at location:%d ",c,n);
    else
        printf("character is not in the string ");
  
      
      
    return 0;
  
      
      
}

