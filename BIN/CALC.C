#include<stdio.h>
#include<conio.h>
int num1,num2;
void getValue()
{
   printf("Enter num1 -: ");
   scanf("%d",&num1);
   printf("Enter num2 -: ");
   scanf("%d",&num2);
}
void optionDisplay()
{
    printf("Options -: \n 0. Exit \t 1. Add \t 2. Sub \t 3. Mul \n 4. Div \t  5. Clear Screen \n");
}
void main()
{
	int option;
	clrscr();
	optionDisplay();
	while(1)
	{
		printf("\nEnter a Option -: ");
		scanf("%d",&option);
		switch(option)
		{
			case 0:
			{
				exit();
				break;
			}
			case 1:
			{
			      getValue();
			      printf("Add is -: %d ",(num1+num2));
			      break;
			}
			case 2:
e			{
			      getValue();
			      printf("Sub is -: %d ",(num1-num2));
			      break;
			}
			case 3:
			{
			      getValue();
			      printf("mul is -: %d ",(num1*num2));
			      break;
			}
			case 4:
			{

			      getValue();
			      if(num2==0)
			      {
				 printf("Can't Divide By Zero");
				 break;
			      }
			      printf("Div is -: %d ",(num1/num2));

			      break;
			}
			case 5:
			{
				clrscr();
				optionDisplay();
				break;
			}
			default:
			{
				printf("Invalid Option !");
				break;
			}
		}
	}
	getch();

}