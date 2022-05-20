#include<stdio.h>
#include<conio.h>
void main()
{
	char s[10] ,a[20];
	clrscr();
	puts("Enter a values:-");
	gets(s);
	gets(a);
	strcat(s,a);
	puts(s);
	getch();
}