#include<stdio.h>
#include<conio.h>
void main()
{
	int a[2][2],b[2][2],add[2][2],i,j;
	clrscr();
	printf("\nEnter a Frist Array values:-");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("\nEnter a Second Array Values:-");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			scanf("%d",&b[i][j]);
		}
	}
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			add[i][j]=a[i][j]+b[i][j];
		}
	}
	printf("\nAdd 2d Array:-\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
		       printf("\t%d",add[i][j]);
		}
		printf("\n");
	}
	getch();
}