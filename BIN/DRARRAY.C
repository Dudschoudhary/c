#include<stdio.h>
#include<conio.h>
int i,j,n,a1[3][3],a2[3][3],a3[3][3],large=0,sum=0,small=0;
void discription()
{
	printf("Enter......case 0 \"Exit\" \ncase 1 \" Matrix 1 value search and Output\"\n  case 2 \"metrix 2 input an output\" \n case 3 \"Add matrix 1 and matrix 2\"\n  case 4 \"clear screen\" \n case 5 \"Largest and sum of number Array 1\"\n case 6 \"Largest and sum of number Array2\"\n\n ");
}
void getvalue1()
{
	printf("Enter a Frist Array values:-");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&a1[i][j]);
		}
	}
}
void getvalue2()
{
	printf("Enter a second Array values:-");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&a2[i][j]);
		}
	}
}
void putvalue1()
{
	printf("Frist Array:-\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("\t%d",a1[i][j]);
		}
	 printf("\n");

	 }
}
void putvalue2()
{
	printf("Second Array:-\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("\t%d",a2[i][j]);
		}
		printf("\n");

	}
}
void array3()
{
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			a3[i][j]=a1[i][j]+a2[i][j];
		}
	}
}
void addarray()
{
	printf("Add Matricx1 and Matrics2:-\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("\t%d",a3[i][j]);
		}
		printf("\n");
	}
}
void large1()
{
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			if(large < a1[i][j])
			{
				large = a1[i][j];
			}
		}
	}
	printf("Largest number of Array:-%d\n",large);

}
void smalla1()
{
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			if(small > a1[i][j])
			{
				small=a1[i][j];
			}
		}
	}
	printf("Small number in Matrixes:- %d\n",small);

}
void suma1()
{
	sum=0;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			sum=sum+a1[i][j];
		}
	}
	printf("Sum of Array 1:-%d\n",sum);
}
void large2()
{
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			if(large < a2[i][j])
			{
				large = a2[i][j];
			}
		}
	}
	printf("Largest number of Array:-%d\n",large);

}
void suma2()
{
	sum=0;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			sum=sum+a2[i][j];
		}
	}
	printf("Sum of Array 1:-%d\n",sum);
}
void comprasition()
{
	if(suma1 > suma2)
	{
		printf("Array 1 is biggest:-\n");
		if(suma2 > suma2)
		{
			printf("Array second biggest:-");
		}
	}
}
void main()
{
	int opction;
	clrscr();
	discription();
	while(1)
	{
		printf("Chose opctions:-");
		scanf("%d",&opction);
		switch(opction)
		{
			case 0 :
			{
				//discription();
				exit();
				break;
			}
			case 1 :
			{
			       //	discription();
				getvalue1();
				clrscr();
				discription();
				putvalue1();
				break;
			}
			case 2 :
			{
				getvalue2();
				clrscr();
				discription();
				putvalue2();
				break;
			}
			case 3 :
			{
				getvalue1();
				getvalue2();
				clrscr();
				array3();
				addarray();
				break;
			}
			case 4 :
			{
				clrscr();
				discription();
				break;
			}
			case 5 :
			{
				getvalue1();
				large1();
				suma1();
				smalla1();
				break;
			}
			case 6 :
			{
				getvalue2();
				large2();
				suma2();
				break;
			}
			case 7 :
			{
				getvalue1();
				getvalue2();
				clrscr();
				comprasition();
			}
		}
	}
	getch();
}