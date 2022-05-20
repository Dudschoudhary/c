#include<stdio.h>
#include<conio.h>
void main()
{
	int i,currenty,birthy,totaly,m,cumonth,birthmon,d,cuday,birday,totalday;
	int leapYearDays=0,temp;
	clrscr();
	printf("Enter a Curunt Year's:-");
	scanf("%d",&currenty);
	printf("Enter a Birth year's:-");
	scanf("%d",&birthy);
	printf("Enter a current month:-");
	scanf("%d",&cumonth);
	printf("Enter a birth month:-");
	scanf("%d",&birthmon);
	printf("Enter a current date:-");
	scanf("%d",&cuday);
	printf("Enter a birth date:-");
	scanf("%d",&birday);

	if(cumonth<birthmon)
	{
		currenty=currenty-1;
		totaly=currenty-birthy;
		printf("\n Total Year's:-%d",totaly);
	}
	else
	{
		totaly=currenty-birthy;
		printf("\nToatal Year's:-%d",totaly);
	}
	if(cumonth<birthmon)
	{

		cumonth=cumonth+12;
		m=cumonth-birthmon;
		printf("\n Total month is:-%d",m);
	}
	else
	{
		m=cumonth-birthmon;
		printf("\n Total month is :- %d",m);
	}
	if(cuday<birday)
	{
		cuday=cuday+30;
		d=(cuday-birday);
		printf("\nBirthday Date:-%d",d);
	}
	else
	{
		d=(cuday-birday)+leapYearDays;
		printf("\nBirthday date is:-%d",d);
	}


    getch();
}