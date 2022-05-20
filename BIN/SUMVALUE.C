#include<stdio.h>
#include<conio.h>
void main()
{
int a[5],i=0,sum=0;
clrscr();
printf("enter a array value:-");
for(i=0;i<5;i++)
       scanf("%d",&a[i]);
       i=0;
for(i=0;i<5;i++)
	{
	sum= sum+a[i];
	i+1;
	}
       printf("\n sum is:-%d",sum);

getch();
}