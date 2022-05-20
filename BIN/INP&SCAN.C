#include<stdio.h>
#include<conio.h>
void main()
{
int a[10],i,n,f=0;
clrscr();
printf("enter a ten numbers");
	for(i=0;i<10;i++)
		{
		scanf("%d",&a[i]);
		}
	printf("enter value to search");
		scanf("%d",&n);
	for(i=0;i<10;i++)
		{
		if(a[i]==n)
		{
		f=i;
		printf("%d",i);
		}
		}
       if(f==0)
		printf("not found");
 getch();
 }









