#include<stdio.h>
#include<conio.h>
void main()
{
	int i;
	clrscr();
	for(i=0;i<=100;i++)   // 4   99<=100
	{
	   printf("\n%d",i);  // 2
	   i++;               // 4
	}
   getch();
}