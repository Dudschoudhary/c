#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,k,n,a[25];
	clrscr();
	printf("Enter a values:-");
	for(i=2;i<=100;i++)
	{
		for(j=1;j<=i;j++)
		{
			if(i%j==0)
			{
				n++;
			}
		}
		k=0;
		if(n==2)
		{
			a[k]=i;
			k++;
		}
	}
	for(i=0;i<25;i++)
	{
		printf("%d",a[i]);
	}
}

