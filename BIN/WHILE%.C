
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
while(a<b)
{
if(a%5==0)
{
printf("\n%d",a);
}
a=a+1;
}
getch();
}


