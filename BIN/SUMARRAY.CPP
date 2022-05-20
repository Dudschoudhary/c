#include<stdio.h>
#include<conio.h>
void main()
{
	int a[5],i,sum=0;
	clrscr();
	printf("enter a elements");
	for(i=0;i<5;i++)
	  scanf("%d",&a[i]);
	  i=0;
       for(i=0;i<5;i++)
       {
	 sum=sum+a[i];
	 i++;
       }
       printf("\n sum is -: %d",sum);
getch();
}

