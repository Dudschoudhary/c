#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,c,d,e;
	clrscr();
	printf("enter a value:-");
	scanf("%d",&a);
	printf("Enter a Second value");
	scanf("%d",&d);
	printf("Enter a third value:-");
	scanf("%d",&e);
for(b=1;b<=10;b++)
{

	c = a*b;
	printf("\t%d * %d=%d",a,b,c);
}
	printf("\n");
for(b=1;b<=10;b++)
{

	c = d*b;
	printf("\t%d * %d=%d",d,b,c);
}
for(b=1;b<=10;b++)
{

	c = e*b;
	printf("\t%d * %d=%d",e,b,c);
}

getch();
}

