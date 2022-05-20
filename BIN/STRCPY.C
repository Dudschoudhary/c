#include<stdio.h>
#include<conio.h>
void main()
{
char a[10],b[20];
clrscr();
gets(a);
gets(b);
strcpy(a,b);
puts(a);
getch();
}