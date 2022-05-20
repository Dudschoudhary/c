#include<stdio.h>
#include<conio.h>
void main()
{
int n;
clrscr();
printf("Enter value");
scanf("%d",&n);
if(n%3==0 && n%4==0)
printf("Divisible");
else
printf("Not Divisible");
getch();
}