#include<stdio.h>
#include<conio.h>
void display()
{
	int i;
	for(i=0;i<5;i++)
		{
			printf("\nHello.....");
		}
}
void main()
{
	char c;
	clrscr();
	c=getchar();
	if(c=='g')
	display();
	else
	printf("wrong inputs:-");
getch();
}
