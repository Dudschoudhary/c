#include<stdio.h>
#include<conio.h>
void main()
{
	int f1=0,f2=1,f3=0,n,i;
	clrscr();
	printf("Enter a valus:-");
	scanf("%d",&n);
	printf("Fibbonaccii Serise:-\n");
	for(i=0;i<=n;i++)
	{
		f3=f1+f2;
		f1=f2;
		f2=f3;
		printf("\t%d",f3);
	}
	getch();
}