#include<stdio.h>
#include<conio.h>
void main()
{
	int array[5],i,j,temp=0;
	clrscr();
	printf("Enter a array values");
	for(i=0;i<5;i++)
	{
		scanf("%d",&array[i]);
	}
	printf("After Array Shorting:-\n");
	for(i=0;i<5;i++)
	{
		printf("\t%d\t",array[i]);
	}
	for(i=0;i<5;i++)
	{
		for(j=i+1;j<5;j++)
		{
			if(array[i] > array[j])
			{
				temp=array[i];
				array[i]=array[j];
				array[j]=temp;
			}
		}
	}
	printf("\n");
	printf("Array Shorting Before:-\n");
	printf("\tAscending Array Values:-\n");
	for(i=0;i<5;i++)
	{
		printf("\t%d\t",array[i]);
	}
	for(i=0;i<5;i++)
	{
		for(j=i+1;j<5;j++)
		{
			if(array[i] < array[j])
			{
			temp=array[i];
			array[i]=array[j];
			array[j]=temp;
			}
		}
	}
	printf("\n");
	printf("\tDescenging Array Values:-\n");
	for(i=0;i<5;i++)
	{
		printf("\t%d\t",array[i]);
	}
	getch();
}


