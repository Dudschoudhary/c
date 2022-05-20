#include<stdio.h>
#include<conio.h>
struct student
{
	int roll;
	float per;
};
void main()
{
	struct student a,b;
	clrscr();
	printf("enter roll,enter percentage");
	scanf("%d %f",&a.roll,&a.per);
	scanf("%d %f",&b.roll,&b.per);
	printf("%d \n%f \n%d \n%f",a.roll,a.per,b.roll,b.per);

getch();
}