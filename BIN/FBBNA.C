#include<conio.h>
#include<stdio.h>
void main()
{
	int fact=1,i,n;
	clrscr();
	printf("%d",&n);
	for(i=0;i<=n;i++)
	{
		fact=fact*i;
	}
	printf("\n%d",fact);



	 getch();
}
