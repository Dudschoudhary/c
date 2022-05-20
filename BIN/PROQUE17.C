#include<stdio.h>
#include<conio.h>
void main()
{
	int proc[5],fun[5],math[5],i;
	clrscr();
for(i=0;i<5;i++)
{
	printf("Enter a student marks :%d\n",i+1);
	printf("programming c");
	scanf("%d",&proc[i]);
	printf("fundamental of computers:-");
	scanf("%d",&fun[i]);
	printf("Mathematical:-");
	scanf("%d",&math[i]);
	clrscr();
}
for(i=0;i<5;i++)
{
	printf("Student:-%d",i+1);
	printf("\tproc:-%d \t foc:-%d\t math:-%d\n",proc[i],fun[i],math[i]);
}
getch();
}