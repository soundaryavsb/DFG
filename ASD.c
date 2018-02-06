#include <stdio.h>

int main(void) {
	int fp,sp,gcs;
	int ch;
printf("Enter first price,second price,Amount given by student customer\n");
scanf("%d%d%d",&fp,&sp,&gcs);
printf("You want recept give 1 \n you dont want recept give 2 \n ");
scanf("%d",&ch);
switch(ch)
{
	case 1:
	{
printf("First item price:RS %d\n",fp);
printf("Second item price:RS %d\n",sp);
printf("--------------------------------\n");
printf("Total price:RS %d\n",fp+sp);
printf("--------------------------------\n");
printf("Amount given by student customer :%d\n",gcs);
printf("Amount returned by shop keeper:%d\n",gcs-(fp+sp));
printf("*************Thank you visit again***************");
}
break;
case 2:
printf("no");
break;
}
return 0;
}
