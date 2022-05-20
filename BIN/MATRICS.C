#include<stdio.h>
#include<conio.h>
void main()
{
	int mat1[3][3],mat2[3][3],i,j,k,sum;
	clrscr();
	printf("\nFrist matrics values:-");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("frist matrics[%d][%d] vlaues:-",i,j);
			scanf("%d",&mat1[i][j]);
			clrscr();
		}
	}
	printf("\nSecond matrics values:-\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
		     printf("Second matrics[%d][%d]",i,j);
		     scanf("%d",&mat2[i][j]);
		     clrscr();
		}
	}
	printf("\Multplaction of matrics values:-\n");
	for(i=0;i<3;i++)
	{
		sum=0;
		for(j=0;j<3;j++)
		{
			for(k=0;k<3;k++)
			{
				sum = sum + (mat1[i][k] * mat2[k][j]);
			}
			printf("\t%d",sum);
		}
		printf("\n");
	}
	getch();
}
