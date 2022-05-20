#include<stdio.h>
#include<conio.h>
void main()
{
int a,b;
clrscr();
printf("enter two number");
scanf("%d %d",&a,&b);
while(a<=b)
{
if(a%3==0)
printf("%d\n",a);
a=a+1;
}
getch();
}