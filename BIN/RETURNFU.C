#include<stdio.h>
#include<conio.h>
int add(int a,int b)
{
	int c;
	c=a+b;
	return c;
}
void main()
{
	int x,y,z;
	clrscr();
	printf("enter tow values:-");
	scanf("%d %d",&x,&y);
	z=add(x,y);
	printf("sum is: = %d",z);
getch();
}