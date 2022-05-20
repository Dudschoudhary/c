#include<stdio.h>
#include<conio.h>
#include<math.h>
int display(int a,int b)
{
	int c;
	c=a+b;
	printf("Addtions is:-%d\n",c);
}
int subtration(int a,int b)
{
	int c;
	c=a-b;
	printf("Subtration is:-%d\n",c);
}
int multply(int a,int b)
{
	int c;
	c=a*b;
	printf("Mulplaction is:-%d\n",c);
}
int divid(int a ,int b)
{
	int c;
	c=a/b;
	printf("Dividestion is:-");
}

void main()
{
	int x=19,y=10;
	clrscr();
	display(x,y);
	subtration(x,y);
	multply(x,y);
	divid(x,y);
	getch();
}