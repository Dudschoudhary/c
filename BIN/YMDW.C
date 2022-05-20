#include<stdio.h>
#include<conio.h>
void main()
{
	int noday,y,m,d,w;
	clrscr();
	printf("Enter a days values:-");
	scanf("%d",&noday);
	y=noday/365;
	noday=noday-(365*y);
	m=noday/30;
	noday=noday-(30*m);
	w=noday/7;
	d=noday-(w*7);
	printf("\nYear:-%d",y);
	printf("\nMonth:-%d",m);
	printf("\nWeek:-%d",w);
	printf("\nDay:-%d",d);
getch();
}