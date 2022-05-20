#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,k=0,n,array[25],search=0,count=0;
	clrscr();
	printf("Prime Number 1 to 100:-");
	for(i=1;i<=100;i++)
	{
		n=0;
		for(j=1;j<=i;j++)
		{
			if(i%j==0)
			{
			   n++;
			}

		}
		if(n==2)
		{
			array[k]=i;
			k++;
		}
	   }
	   for(i=0;i<25;i++)
	   {
		printf("\t[%d] %d",i,array[i]);

	   }
		printf("\n");
		printf("Array index number8:-%d",array[7]);
	   getch();

}


