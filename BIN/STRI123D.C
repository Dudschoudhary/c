#include<stdio.h>
#include<conio.h>
void main()
{
	char s1[60],s2[60];
	int i,j;
	clrscr();
	puts("Eneter a value of s1:-");
	gets(s1);
	puts("Enter a value of s2:-");
	gets(s2);
	strcat(s1,s2);
	printf("Concunent string of s1 & s2:-");
	puts(s1);
	puts("Lower Case:-");
	strlwr(s1);
	puts(s1);
	puts("Upper case");
	strupr(s2);
	puts(s2);
	puts("string copy:-");
	strcpy(s1,s2);
	puts(s1);
	i=strlen(s1);
	printf("Length of s1 String arrays:-%d",i);
	j=strlen(s2);
	printf("Length of s2 string of Arrays:-%d",j);
	getch();
}