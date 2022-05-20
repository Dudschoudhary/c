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
while(b>a)
{
if(b%3==0)
{
printf("\n%d",b);
}
b=b-1;
}
getch();
}


