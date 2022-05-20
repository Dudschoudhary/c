#include<stdio.h>
#include<conio.h>
void main()
{
	int i=1,j;
	clrscr();
	printf("Entr a values:-");
	scanf("%d",&j);
	while(i<=10)
	{
		printf("\n%d",i*j);
		i+1;
	}
	getch();
}
