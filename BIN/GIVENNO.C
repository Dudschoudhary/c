#include<stdio.h>
#include<conio.h>
void main()
{
int n,j=1;
clrscr();
printf("enter a value");
scanf("%d",&n);
while(j<=10)
{
printf("%d\n",j*n);

j++;
}
getch();
}