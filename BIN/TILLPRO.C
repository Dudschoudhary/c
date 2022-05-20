#include<stdio.h>
#include<conio.h>
float s1,s2,s3,s4,s5,s6,s7,s8,s9,avg,total,per,give;
void getopction()
{
	printf("0 enter 'exit'\t 1.Tenth class Result\t 2.Twelth class Result 3.clear screen 4.Bca frist Year Result:-");
}
void tenth()
{
	printf("\nHindi:-");
	scanf("%f",&s1);
	printf("\nEngilsh:-");
	scanf("%f",&s2);
	printf("\nScience:-");
	scanf("%f",&s3);
	printf("\nMath:-");
	scanf("%f",&s4);
	printf("\nSocial science:-");
	scanf("%f",&s5);
	printf("\nSanskrit:-");
	scanf("%f",&s6);
	clrscr();
	total=s1+s2+s3+s4+s5+s6;
	printf("\nTotal's Number:-%f",total);
	per=total*100/600;
	printf("\nPercentage:-%f",per);
}
void twelth()
{
	printf("Enter a value's:-");
	scanf("%f %f %f %f %f",&s1,&s2,&s3,&s4,&s5);
	total=s1+s2+s3+s4+s5;
	printf("\nTotal's Number:-%f",total);
	per=total*100/500;
	printf("%f",per);
}
void bca()
{
	printf("\nFundamantel of computer:-");
	scanf("%f",&s1);
	printf("\nProgramming c:-");
	scanf("%f",&s2);
	printf("\nInternet & Ecomuaruse:-");
	scanf("%f",&s3);
	printf("\nDigital Electronic :-");
	scanf("%f",&s4);
	printf("\nMathematical:-");
	scanf("%f",&s5);
	printf("\nEnter a parectial sublect's:-");
	printf("\nMs World");
	scanf("%f",&s6);
	printf("\nDigital electronic:-");
	scanf("%f",&s7);
	printf("\nHtml:-");
	scanf("%f",&s8);
	printf("\nProgrammint c:-");
	scanf("%f",&s9);
	clrscr();
	total=s1+s2+s3+s4+s5+s6+s7+s8+s9;
	printf("\nTotal's Number:-%f",total);
	per=total*100/900;
	printf("/nPercentage is:-%f",per);
	avg=total/9;
	printf("\nAverage Number of total subject:-%f",avg);
}
void main()
{
	int opction;
	clrscr();
	getopction();
	while(1)
	{
		printf("\nEnter a opction's:-");
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
				tenth();
				break;
			}
			case 2 :
			{
				twelth();
				break;
			}
			case 3 :
			{
				clrscr();
				break;
			}
			case 4 :{
				bca();
				break;
			}
		}
	}
	getch();
}
