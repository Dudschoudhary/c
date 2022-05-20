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
	printf("enter a roll number and percentage of students:-");
	scanf("%d %f",&a.roll,&a.per);
	scanf("%d %f",&b.roll,&b.per);
	printf("Roll Numrer:-%d\n",a.roll);
	printf("Percentage is:-%f\n",a.per);
	printf("Roll number of B:-%d\n",b.roll);
	printf("Percentage of B:-%f:-",b.per);
	getch();
}