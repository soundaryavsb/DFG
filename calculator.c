#include <stdio.h>

int main(void) {
	int a,b;
	char ch;
	scanf("%d%c%d",&a,&ch,&b);
	switch(ch)
	{
		case '/':
			printf("%d",a/b);
			break;
		case '%':
		    printf("%d",a%b);
		    break;
		   
	}
	return 0;
}
