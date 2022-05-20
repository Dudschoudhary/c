#include<stdio.h>
#include<conio.h>
void main()
{
	int i=1,j;
	clrscr();
	printf("Enter a value:-");
	scanf("%d",&j);
	do
	{
		printf("\nHello world");
		printf("\t%d",i);
		i++;
	}
	while(i<=10);

	getch();

}