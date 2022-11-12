#include <stdio.h>
#include <string.h>
int check(char *s,char *w)
{
    int n,a[1000],i,j,k=1,l,found=0,t=0,b;
    a[0]=-1;
    for(i=0;s[i];i++)
    {
    	if(s[i]==' ')
    	{
    		a[k++]=i;
		}
	}
	j=strlen(s);	 
 
	for(k--;k>=0;k--)
	{
		n=j-a[k]-1;
 
		if(n==strlen(w))
		{
			t=0;
			for(l=0;w[l];l++)
			{
				if(s[a[k]+l+1]==w[l])
				{
					t++;
				}
			}			
		}
		if(t==strlen(w))
		{
				found=1;
				break;
		}
		j=a[k];
 	}

	if(found)
	return a[k]+1;
	 
    return -1;

	
}
 
int main()
{
    char s[1000],w[1000]; 
	int n; 
 
    printf("Enter  the string : ");
    gets(s);
    printf("Enter word to be searched: ");
    gets(w);
    n=check(s,w);
     if(n>=0)
     printf("word %s  is last occurred at location:%d ",w,n);
    else
     printf("word is not occurred in the string "); 
    

}