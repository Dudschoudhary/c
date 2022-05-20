#include<stdio.h>
#include<conio.h>
struct student
{
	int roll;
	char g;
};
void main()
{
	struct student a[3];
	int i;
	clrscr();
	printf("enter roll number and gread:- ");
	for(i=0;i<3;i++)
	{
		scanf("%d %c",&a[i].roll,&a[i].g);
	}
	for(i=0;i<3;i++)
	{
		printf("%d\n%c",a[i].roll,a[i].g);
	}
getch();
}

