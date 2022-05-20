#include<stdio.h>
#include<conio.h>
void main()
{
int a,b;
clrscr();
printf("enter a frist value");
scanf("%d",&a);
printf("enter a second value");
scanf("%d",&b);
do
{
if(a%4==0)
{
printf("%d\t",a);
}
a=a+1;
}
while(a<b);
getch();
}