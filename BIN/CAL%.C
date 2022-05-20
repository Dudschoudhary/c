#include<stdio.h>
#include<conio.h>
void main()
{
int s1,s2,s3,s4,s5,total;
float percentage;
clrscr();
printf("enter numbers");
scanf("%d %d %d %d %d",&s1,s2,s3,s4,s5);
total=s1+s2+s3+s4+s5;
printf("total of numbers %d",total);
percentage=total *100/50;
printf("in percentage %f",percentage);
getch();
}