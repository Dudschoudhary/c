#include<stdio.h>
#include<conio.h>
void converson(int x, int y)
{
      float z;
      z = (int
      )y/(int)x;
      printf("%f",z);
      return z;
}
void main()
{
	int x=10,y=12;
	clrscr();
	converson(x,y);
	getch();
}