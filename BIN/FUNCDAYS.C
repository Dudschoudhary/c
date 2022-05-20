#include<stdio.h>
#include<conio.h>
void getcount()
{
	printf("\n0.exit \t 1 to 7 days name \t \n 8.clrscr\t 9 after default values\n");
}
void main()
{
	int opction;
	clrscr();
	getcount();
while(1)
{
	printf("\nenter a opction:- ");
	scanf("%d",&opction);
	switch(opction)
	{
		case 0 :
		{
			exit();
			break;

		}
		case 1 :
		{
			printf("Monday");
			break;
		}
		case 2 :
		{
			printf("Tuesday");
			break;
		}
		case 3 :
		{
			printf("Wednesday");
			break;
		}
		case 4 :
		{
			printf("Thursday");
			break;
		}
		case 5 :
		{
			printf("Friday");
			break;
		}
		case 6 :
		{
			printf("Saturday");
			break;
		}
		case 7 :
		{
			printf("Sunday");
			break;
		}
		case 8 :
		{
			clrscr();
			getcount();
			break;
		}

		default :
		{
			printf("Value not found");
			break;
		}
	 }
}
getch();
}