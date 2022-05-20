#include<stdio.h>
#include<conio.h>
int row,column;
void main()
{
	int array[100][100],sum1=0,sum2=0,sum3=0,count=0,i,j,row,column,sum[5];
	clrscr();
	printf("enter a row -: ");
	scanf("%d",&row);
	printf("enter a column -: ");
	scanf("%d",&column);
	if(row==column)
	{
		for(i=0;i<row;i++)
		{
			for(j=0;j<column;j++)
			{
			    scanf("%d",&array[i][j]);
			}
		}
		clrscr();
	 }
	 else
	 {
		printf("Row and column value changed");
		exit();
	 }
	 for(i=0;i<row;i++)
	 {
		for(j=0;j<column;j++)
		{
		 //if(i==1)
		   sum3=sum3+array[i][j];

		   printf("%d\t",array[i][j]);
		   if(i==j)
		       sum1=sum1+array[i][j];
		   if(i==2-j)
		       sum2=sum2+array[i][j];
		}
		sum[count]=sum3;
		sum3=0;
		count++;
		printf("\n");
	 }
	 printf("sum is %d ",sum3);
	 printf("\n Sum of Dig -: %d",sum1);
	 printf("\n Sum of OfDig -: %d ",sum2);
	 for(i=0;i<row;i++)
	    printf("\nsum of row%d -> %d",i,sum[i]);

   getch();
}