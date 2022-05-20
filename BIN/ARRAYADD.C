#include<stdio.h>
#include<conio.h>
void main()
{
	int a[5],i,secarray[5],addarray[5];
	clrscr();
	printf("\nEnter a Search values Frist value:-\n");
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("\nEnter a Search value Second values:-\n");
	for(i=0;i<5;i++)
	{
		scanf("%d",&secarray[i]);
	}
	clrscr();
	printf("Frist Array:-\n");
	for(i=0;i<5;i++)
	{
		printf("%d\t",a[i]);

	}
	printf("\nSecond array:-\n");
	for(i=0;i<5;i++)
	{
		printf("%d\t",secarray[i]);
	}
	for(i=0;i<5;i++)
	{
		addarray[i]= a[i]+secarray[i];
	}
		printf("\nAdd Array is:-\n");
	for(i=0;i<5;i++)
	{
		printf("%d\t",addarray[i]);
	}
	getch();
}
