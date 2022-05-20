#include<stdio.h>
#include<conio.h>
void main()
{
int a[10],i=0,sum=0;
clrscr();
printf("enter values:- ");
for(i=0;i<10;i++)
{
	scanf("%d",&a[i]);
}
	i=0;
for(i=0;i<10;i++)
{
	sum = sum+a[i];
	i+1;
}
	printf("Sum is:- %d",sum);
getch();
}

