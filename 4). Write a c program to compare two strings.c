#include <stdio.h>  
int compare(char *a,char *b)  
{  
    int flag=0;  
    while(*a!='\0' && *b!='\0')    
    {  
        if(*a!=*b)  
        {  
            flag=1;
            break;
        }  
        a++;  
        b++;  
    }  
    if(flag==0 && *a=='\0' && *b=='\0')
    return 0;
    if(*a > *b)
        return 1;
        else
        return -1;
 
}    
int main()  
{  
    char str1[30],str2[30];
     printf("Enter the first string : ");  
    scanf("%s",str1);  
    printf("\nEnter the second string : ");  
    scanf("%s",str2);  
    int res=compare(str1,str2);  
    if(res==0)  
    printf("strings are equal");  
    else
    printf("strings are not equal");
    return 0;  
}