#include<stdio.h>
#include<conio.h>
 int number1,number2;
void valueinsert()
{
	printf("\nNumber1 is:- ");
	scanf("%d",&number1);
	printf("Number2 is:- ");
	scanf(" %d",&number2);
}
void opctiondisplay()
{
	printf("\n0. Exit \t 1. Add \t 2. Subtraction \t 3. multply \t\n  4. dive \t5.clrscr\n");
}
void main()

{
	int opction;
	clrscr();
	opctiondisplay();
while(1)
{
	printf("\n enter a opctio");
	scanf("%d",&opction);
	switch(opction)
	{
		case 0 :
		{
			exit();
			break;
		}
		case 1:
		{       valueinsert();
			clrscr();
			opctiondisplay();
			printf("\nAdd is:- %d",(number1+number2));
			break;
		}
		case 2 :
		{
			valueinsert();
			clrscr();
			opctiondisplay();
			printf("\nSub is :- %d",(number1-number2));
			break;
		}
		case 3 :
		{
			valueinsert();
			clrscr();
			opctiondisplay();
			printf("\nMul is:- %d",(number1+number2));
			break;
		}
		case 4 :
		{
			valueinsert();
			clrscr();
			opctiondisplay();
			if(number2==0)
			{
				printf("\ncan't Divid by Zero values....");
				break;
			 }

			printf("\nDivedation is:- %d",(number1/number2));
			break;
		}
		case 5 :
		{
			clrscr();
			opctiondisplay();
			break;
		 }
		 default :
		 {
			printf("wrong input..");
		 }
	  }
     }
getch();
}
