#include<stdio.h>
#include<conio.h>
int myname(int x,int y)
{    int e;
     e = x+y;
     return e;
}
void main()
{
	int a=5,b=5,c;
	clrscr();
	printf("%d",myname(5,4));
	getch();
}