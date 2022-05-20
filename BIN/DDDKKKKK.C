#include<stdio.h>
#include<conio.h>
void main()
{
int m=0,n,i,j;
clrscr();
printf("enter a value");
scanf("%d",&n);
for(i=0;i<=n;i++)
{
    for(j=0;j<=i;j++)

	{
		printf("%d",m);
		m++;
	}
		printf("\n");
}
getch();
}
