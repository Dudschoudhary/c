#include<stdio.h>
#include<conio.h>
void add(int a,int b)
{
	int c;
	c=a+b;
	printf("Sum is = %d",c);
}
void subtraction(int a ,int b)
{
	int c;
	c=a-b;
	printf("subtraction is = %d",c);
}
void multiply(int a,int b)
{
	int c;
	c=a*b;
	printf("Multiplication is = %d",c);
}
void dived(int a ,int b)
{
	int c;
	c=a/b;
	printf("Dividation is = %d",c);
}
void main()
{
	int i,x=12,y=3;
	clrscr();
	printf("entea a value:- ");
	scanf("%d",&i);
	switch(i)
	{
	case 1 : add(x,y);
	break;
	case 2 : subtraction(x,y);
	break;
	case 3 : multiply(x,y);
	break;
	case 4 : dived(x,y);
	break;
	default : printf("Worng value:-");
	}
getch();
}