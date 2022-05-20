#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,n;
	clrscr();
	printf("Enter a values:-");
	for(i=1;i<=100;i++)
	{
		n=0;
		for(j=1;j<=i;j++)
		{
			if(i%j==0)
			n++;
		}
		if(n==2)
		{
			printf("%d\t",i);
		}
	}
	getch();
}