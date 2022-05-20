#include<stdio.h>
#include<conio.h>
int sum=0;
int add(int i)   // 10
{
	sum=sum+i;   // sum = 55
	if(i>=10)     // 10 > 10
	   return sum;
	i++; //  10
	add(i);
}
void main()
{
	clrscr();
	printf("total is : %d ",add(0));    ///  0

   getch();
}
