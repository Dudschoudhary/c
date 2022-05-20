#include<stdio.h>
#include<conio.h>
int i=1,n,fact=1;
int factnumber()
{
	if(i<=n) //  6 < = 5
	{
	    fact = fact * i; // fact = 120
	    i++; // 6
	    factnumber();
	}
	else
	   return 0;
}
void main()
{
	clrscr();
	printf("Enter lenght : ");
	scanf("%d",&n);
	factnumber();
	printf("Factorial of %d is : %d",n,fact);
	getch();
}