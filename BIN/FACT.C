#include<stdio.h>
#include<conio.h>
void main()
{
	int i,n;
	long fact=1;
	clrscr();
	printf("Enter a values:-");
	scanf("%d",&n);
	if(n<0)
	{
		printf("Error! \"Factorial\"of a negetive number doesn't supported:-");
	}
	else
	{
		for(i=1;i<=n;i++)
		{
			fact=fact*i;
			printf("\n%lu",fact);
		}
	}
	getch();
}
