#include<stdio.h>
#include<conio.h>
void main()
{
	int a[100][100],row,column,i,j,sum1=0,sum2=0,sum3=0,sum[5],count=0;
	clrscr();
	printf("enter a rows-:");
	scanf("%d",&row);
	printf("enter a column-:");
	scanf("%d",&column);
if(row==column)
{
	for(i=0;i<row;i++)
	{
		for(j=0;j<column;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
}
else
{
	printf("Array value changed....");
	exit();
}
for(i=0;i<row;i++)
{
	for(j=0;j<column;j++)
	{
		printf("\t%d",a[i][j]);
		if(i==j)
		sum1=sum1+a[i][j];
		if(i==2-j)
		sum2=sum2+a[i][j];
	}
	sum[count]=sum3;
	sum3=0;
	count++;
	printf("\n");
}
	printf("\nsum of dignaol%d-:",sum1);
	printf("\nsum of of dignol-:%d",sum2);

for(i=0;i<row;i++)
{
	printf("\nsum array %d is column-: %d",i,sum[i]);
}

/* for(i=0;i<row;i++)
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
	    printf("\nsum of row%d -> %d",i,sum[i]);*/

getch();
}











