#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,n,m=0;
	clrscr();
	printf("Enter a values:-");
	scanf("%d",&n);
	for(i=0;i<=n;i++)
	{
		for(j=0;j<=i;j++)
		{
			printf("%d",m);
			m++;
		}
		printf("\n");
	}
	getch();
}