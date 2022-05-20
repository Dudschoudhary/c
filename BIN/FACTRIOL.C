#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,n,fact=1;
	clrscr();
	printf("Factriol Number:-\n");
	printf("Enter a values:-\n");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		fact=fact*i;
	}
	printf("%d",fact);
	getch();
}