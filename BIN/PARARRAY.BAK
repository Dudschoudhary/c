#include<stdio.h>
#include<conio.h>
void main()
{
	int a[3][3],i,j,sum=0,large=0;
	clrscr();
	printf("\n 2 Daymensnal Array:-");
	printf("\nSearch array Values:-");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("Array value:-\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("\t%d",a[i][j]);
		}
		printf("\n");
	}
	printf("\nLargest number of Arrays:-/n");
	large=a[0];
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			if(large < a[i][j])
			{
			large=a[i][j];
			}
		}
	}
		printf("\t%d",large);
	printf("\nSum of Arrays:-\n");
	sum=a[0];
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
		       sum=sum+a[i][j];
		}
	}
	printf("\t%d",sum);
	getch();
}

