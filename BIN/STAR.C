#include<stdio.h>
#include<conio.h>
void pattren1(int row)
{
	int i,j;
	for(i=0;i<row;i++)
	{
	    for(j=0;j<row;j++)
	    {
		printf("*");
	    }
		printf("\n");
	}
}
void pattren2(int row)
{
	int i,j;
	for(i=0;i<=row;i++)
	{
	    for(j=0;j<=row;j++)
	    {
		if(i==0 || i==row || j==0 ||j==row)
		  printf("*");
		else
		  printf(" ");
	    }
		printf("\n");
	}
}
void pattren3(int row)
{
	int i,j;
	for(i=0;i<=row;i++)
	{
	    for(j=0;j<=row;j++)
	    {
		if(i==0 || i==row || j==0 ||j==row || i==j)
		  printf("*");
		else
		  printf(" ");
	    }
		printf("\n");
	}
}
void pattren4(int row)
{
	int i,j;
	for(i=0;i<=row;i++)
	{
	    for(j=0;j<=row;j++)
	    {
		if(i==0 || i==row || j==0 ||j==row || j==row-i+1)
		  printf("*");
		else
		  printf(" ");
	    }
		printf("\n");
	}
}
void pattren5(int row)
{
	int i,j;
	for(i=0;i<=row;i++)
	{
	    for(j=0;j<=row;j++)
	    {
		if(i==0 || i==row || j==0 ||j==row || i==j || j==row-i)
		  printf("*");
		else
		  printf(" ");
	    }
		printf("\n");
	}
}
void pattren6(int row)
{
	int i,j;
	for(i=0;i<=row;i++)
	{
	    for(j=0;j<=i;j++)
	    {
		 printf("*");
	    }
		printf("\n");
	}
}
void pattren7(int row)
{
	int i,j;
	for(i=row;i>=0;i--)
	{
	    for(j=i;j>=0;j--)
	    {
		 printf("*");
	    }
		printf("\n");
	}
}
void pattren8(int row)
{
	int i,j,k,temp;
	temp=row;
	for(i=0;i<=row;i++)
	{
	    for(j=0;j<=temp-1;j++)
	    {
		 printf(" ");
	    }
	    for(k=0;k<=2*i-temp;k++)
	    {
		printf("*");
	    }
	     printf("\n");
	}
}
void main()
{
	int option,rows;
	clrscr();
	printf("Enter number of Rows : ");
	scanf("%d",&rows);
	printf("Options : \n 1. Star 1 \n 2. Star 2 \n 3. Star 3\n 4. Star 4\n 5. Star 5\n 6. Star 6 \n 7. Star 7 \n 0 To Exit\n");
	while(1)
	{
		printf("Enter a option : ");
		scanf("%d",&option);
		switch(option)
		{
			case 0:
			{
				printf("By.. Exit !");
				exit();
				break;
			}
			case 1:
			{
				pattren1(rows);
				break;
			}
			case 2:
			{
				pattren2(rows);
				break;
			}
			case 3:
			{
				pattren3(rows);
				break;
			}
			case 4:
			{
				pattren4(rows);
				break;
			}
			case 5:
			{
			       pattren5(rows);
			       break;
			}
			case 6:
			{
				pattren6(rows);
				break;
			}
			case 7:
			{
				pattren7(rows);
				break;
			}
			case 8:
			{
				pattren8(rows);
				break;
			}
			default:
			{
				printf("Invalid Option:\n");
				break;
			}
		}
	}


	getch();
}