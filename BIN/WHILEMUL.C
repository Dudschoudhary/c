#include<stdio.h>
#include<conio.h>
void main()
{
int a,i=1;
clrscr();
printf("enter a value:-");
scanf("%d",&a);
for(i=1;i<=10;i++)
{
printf("%d\n",i*a);

}
getch();
}