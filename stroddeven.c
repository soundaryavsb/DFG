#include <stdio.h>

int main(void) {
    char a[10];
    scanf("%s",&a);
    for(int i=0;a[i]!='\0';i++)
    {
    	if(i%2==0)
    	{
    		printf("%c",a[i]);
    	}
    }
    printf("\t");
     for(int i=0;a[i]!='\0';i++)
    {
    	if(i%2!=0)
    	{
    		printf("%c",a[i]);
    	}
    }
	return 0;
}
