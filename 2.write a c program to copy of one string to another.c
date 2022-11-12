#include<stdio.h>
void copystr(char *targetString, char *sourceString)
{
    while(*sourceString)
    {
        *targetString = *sourceString;
        sourceString++;
        targetString++;
    }
    *targetString = '\0';
}

void copystr(char *, char *);
int main()
{
    char sourceStr[50], targetStr[50];
    printf("Enter the string: ");
    gets(sourceStr);
    printf("\nString 1 = %s", sourceStr);
    copystr(targetStr, sourceStr);
    printf("\nString 2 = %s", targetStr);
    getch();
    return 0;
}
