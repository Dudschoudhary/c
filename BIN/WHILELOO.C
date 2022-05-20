#include<stdio.h>
#include<conio.h>
void main()
{
	int i=0,a[5],j=1;
	clrscr();

	for(i=0;i<5;i++)
	{
	    scanf("%d",&a[i]);
	}

	for(i=0;i<5;i++)
	   printf("Hello array %dnd value is -:%d \n",j++,a[i]);




   getch();

}