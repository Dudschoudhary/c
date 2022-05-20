#include<stdio.h>
#include<conio.h>
int d1,d2;
void getvalue()
{
	printf("\n0.Exit \t 1.Addition \t 2.Subtration\t \t3.Multply \n\n\t 4. Divedition \t 5.Clear Screen \t 6 And 6 After Wrong) value\n");
}
void opctiondisplay()
{
	printf("enter a value1:- ");
	scanf("%d",&d1);
	printf("enter a value2:- ");
	scanf("%d",&d2);
}
void main()
{
	int opction;
	clrscr();
	getvalue();
while(1)
{
	printf("\n enter a opction");
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
			opctiondisplay();
			clrscr();
			getvalue();
			printf("\nadd is:= %d",(d1+d2));
			break;
		}
		case 2 :

		{      	opctiondisplay();
			clrscr();
			getvalue();
			printf("\nsub is:= %d",(d1-d2));
			break;
		}
		case 3 :
		{       opctiondisplay();
			clrscr();
			getvalue();
			printf("\nmul is:= %d",(d1*d2));
			break;
		}
		case 4 :
		{       opctiondisplay();
			clrscr();
			getvalue();
			printf("\ndiv is:=%d",(d1/d2));
			break;
		}
		case 5 :
		{
			clrscr();
			getvalue();
			break;
		}
		default :
		{
			printf("wrong values...");
			break;
		}

	    }
	}
getch();
}
