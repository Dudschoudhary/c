#include<stdio.h>
#include<conio.h>
int chopesh(int a, int b)
{
	int c;
	c=a+b;
	printf("Additation is two numbers:-[%d] + [%d] = %d\n",a,b,c);
	return c;
}
int subtration(int a, int b)
{
	int c;
	c=a-b;
	printf("Subtration is two number:-[%d] - [%d] = %d\n",a,b,c);
	return c;
}
void main()
{
	int a,b;
	clrscr();
	printf("Enter a a values:-");
	scanf("%d",&a);
	printf("Enter a b values:-");
	scanf("%d",&b);
	chopesh(a,b);
	subtration(a,b);
	getch();

}