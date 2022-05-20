#include<stdio.h>
#include<conio.h>
void main()
{
	int i,num,count;
	clrscr();
	printf("Prime number 1 to  100:-");
	for(num=1;num<=100;num++)
	{
	count=0;
		for(i=1;i<=num;i++)
		{
			if(num%i==0)
			count++;

		}
		if(count==0 && num!=1)
		{
			printf("\t%d",num);
		}
	}
	getch();
}