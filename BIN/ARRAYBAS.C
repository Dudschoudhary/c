#include<stdio.h>
#include<conio.h>
void main()
{
int a[5],i;
clrscr();
printf("enter elements");
for(i=0;i<5;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<5;i++)
{
printf("%d\n",a[i]);
}
getch();
}
