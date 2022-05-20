#include<stdio.h>
#include<conio.h>
void main()
{
int a[5],i;
clrscr();
printf("enter a value:-");
for(i=0;i<5;i++)
scanf("%d",&a[i]);
for(i=4;i>=0;i--)
printf("%d\t",a[i]);
getch();
}