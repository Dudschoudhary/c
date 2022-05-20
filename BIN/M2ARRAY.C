#include<stdio.h>
#include<conio.h>
void main()
{
	int a[3][3],a2[3][4],a3=[3][4]i,j;
	clrscr();
	printf("\"Enter a Frist array value\":-");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("\nEnter a second Array value:-");
	for(i=0;i<3;i++)
	{
		for(j=0;j<4;j++)
		{
			scanf("%d",&a2[i][j]);

		}
	}
	printf("Frist Array:-");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("\t%d",a[i][j]);
		}
		printf("\n");
	}
	printf("second array\n") ;
	for(i=0;i<3;i++)
	{
		for(j=0;j<4;j++)
		{
			printf("\t%d",a2[i][j]);
		}
		printf("\n");
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<4;j++)
		{
			a3=a[0][0]*a2[0][0]
			a[0][1]*a2[1][0]
			a[0][2]*a2[2][0] ;
		}
		printf("\n");
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<4;j++)
		{
		      printf("%d",a3[3][4]);
		}
		printf("\n");
	}



	getch();

}