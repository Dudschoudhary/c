#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,k,l,a=1;
	clrscr();
	printf("* * * * * * *\n");
	for(i=1;i<=3;i++)
	{
		for(j=3;j>=i;j--)
			printf("* ");
			for(k=1;k<=a;k++)
			printf(" ");
			a+=2;
			for(l=3;l>=i;l--);
			printf("* ");
			printf("\n");
	}
	getch();
}