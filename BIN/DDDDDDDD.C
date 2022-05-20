#include<stdio.h>
#include<conio.h>
void main()
{
int f1=0,f2=1,f3=0,i=0,n;
clrscr();
printf("enter a value:-");
scanf("%d",&n);
while(i<n)
{
	printf("%d",f3);
	f3=f1+f2;
	f1=f2;
	f2=f3;
	i=i+1;
}
getch();
}