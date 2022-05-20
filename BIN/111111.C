#include<stdio.h>
#include<conio.h>
int i,j,n,value=0,qube=0;
void scqur()
{
	value=0;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		{
			value=(i*j);
		}
			printf("%d Squre is:-%d\n",i,value);
	}
}
void qubes()
{

	for(i=0;i<=n;i++)
	{
		for(j=0;j<=i;j++)
		{
			qube=(i*i*j);
		}
		printf("\t\t%d Qube is:- %d",i,qube);
	}
}
void main()
{
	clrscr();
	printf("Enter a values:-");
	scanf("%d",&n);
	scqur();
	qubes();
getch();
}



