#include<stdio.h>
#include<conio.h>
void main()
{
	float till,unit,preperson,frist,today;
	clrscr();
	printf("Enter a frist unit:-");
	scanf("%f",&frist);
	printf("Enter a todays units:-");
	scanf("%f",&today);
	unit=today-frist;
	printf("Aaj tak units %f",unit);
	till=unit*9;
	printf("\nElectricty till is:-%f",till);
	preperson=till/4;
	printf("\nper person till:-%f",preperson)
	;
	getch();
}