#include<stdio.h>
#include<conio.h>
void main()
{
	int mat1[3][3],mat2[3][3],i,j,k,sum;
	clrscr();
	printf("Enter Value In Matrix 1 : \n");
	for(i=0;i<3;i++)
	{
	    for(j=0;j<3;j++)
	    {
		printf("Enter value in : [%d][%d] => ",i,j);
		scanf("%d",&mat1[i][j]);
		clrscr();
	    }
	}
	printf("Enter Value In Matrix 2 : \n");
	for(i=0;i<3;i++)
	{
	    for(j=0;j<3;j++)
	    {
		printf("Enter value in : [%d][%d] => ",i,j);
		scanf("%d",&mat2[i][j]);
		clrscr();
	    }
	}

	for(i=0;i<3;i++) // 0
	{
		sum = 0;
		for(j=0;j<3;j++) // 0,1,2
		{
			for(k=0;k<3;k++) // 0
			{
				// a [i] [k] * b [k] [j]
				sum = sum+(mat1[i][k] * mat2[k][j]);
			}
			printf("%d\t",sum);
		}

		printf("\n");
	}

	getch();
}