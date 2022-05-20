#include<stdio.h>
#include<conio.h>
void main()
{
char s1[20],s2[20];
int i;
clrscr();
gets(s1);
gets(s2);
i=strcmp(s1,s2);
printf("%d",i);
getch();
}
