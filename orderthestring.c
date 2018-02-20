#include <stdio.h>

int main(void) {
           int i,j,temp;
           char s[50];
           scanf("%s",s);
           for(i=0;s[i]!='\0';i++)
           {
           	for(j=i+1;s[j]!='\0';j++)
           	{
           		if(s[i]>s[j])
           		{
           	               temp=s[i];
           	               s[i]=s[j];
           	               s[j]=temp;
           		}
           	}
           
           }
           for(i=0;s[i]!='\0';i++)
           {
           printf("%c",s[i]);
           }
	return 0;
}
