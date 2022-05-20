#include<stdio.h>
#include<conio.h>
void add(int a, int b)
{
	int c;
	c=a+b;
	printf("%d",c);
}
void sub(int a ,int b)
{
	int c;
	c=a-b;
	printf("%d",c);
}
void mul(int a, int b)
{
	int c;
	c=a*b;
	printf("%d",c);
}
void div(int a, int b)
{
	int c;
	c=a/b;
	printf("%d",c);
}
void main()
{
	int i,x,y;
	clrscr();
	printf("enter a opctiuon");
	scanf("%d %d",&x,&y);
	scanf("%d",&i);
switch(i)
{
	case 1 : add(x,y);
	break;
	case 2 : sub(x,y);
	break;
	case 3 : mul(x,y);
	break;
	case 4 : div(x,y);
	break;
}
getch();
}


