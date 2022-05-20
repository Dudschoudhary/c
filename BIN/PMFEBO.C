#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,c,i,len;
	clrscr();
	printf("Enter a length -: ");
	scanf("%d",&len);
	a=0;
	b=1;
	printf("%d\t%d\t",a,b);
	for(i=0;i<=len;i++)
	{
	   c = a+b;
	   printf("%d\t",c); // 1  2  3  5
	   a=b;              // 2
	   b=c;              // 3
	}
	getch();
}
