#include<stdio.h>
#include<conio.h>
int a[3][3],i,j,n;
void searchvalue()
{
	printf("enter a value");
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
	printf("\nArray is print....\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("\t%d",a[i][j]);
		}
			printf("\n");
	}
}
void searcharray()
{
	printf("enter a search value:-");
	scanf("%d",&n);
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			if(a[i][j]==n)
			{
				printf("Arran %d conditions are-[%d][%d]",n,i,j);

			}
		}

	}

}
void main()
{
	clrscr();
	searchvalue();
	printvalue();
	searcharray();
getch();
}




