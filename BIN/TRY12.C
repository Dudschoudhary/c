#include<stdio.h>
#include<conio.h>
int a[3][3],i,j,large,sum,n=0;
void getvalue()
{
	printf("Enter a values:-");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
}
void printvalue()
{
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("\t%d",a[i][j]);
		}
		printf("\n");
	}
}
void sumvalue()
{
	sum=0;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
		  sum=sum+a[i][j];
		  i+1;
		  j+1;
		}
	}

		printf("\nSum is :-%d",sum);
}
void largenumber()
{
	large=a[0][0];
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			if(large <a[i][j])
			{
			large=a[i][j];
			}
		}
	}
	printf(" \nLargest numer is:-%d",large);
}
void searchvalue()
{
printf("Search avalue of array:-");
scanf("%d",&n);
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			if(a[i][j]==n)
			{
			printf("%d array is[%d][%d]",n,i,j);
			}
		}
	}
}
void main()
{
	int opction;
	clrscr();
	getvalue();
while(1)
{
		printf("\nenter a opction:-");
		scanf("%d",&opction);
   switch(opction)
    {
	case 0 :
	{
		exit();
		break;
	}
	case 1 :
	{
		printvalue();
		break;
	}
	case 2 :
	{
		sumvalue();
		break;
	}
	case 3 :
	{
		largenumber();
		break;
	}
	case 4 :
	{
		searchvalue();
		break;

	}
	case 5 :
	{
		clrscr();
		break;
	}
	default :
	{
		printf("Wrong Values");
	}
    }
}
getch();
}