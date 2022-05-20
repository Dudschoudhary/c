#include<stdio.h>
#include<conio.h>
int display(int a , int b)
{
	int c;
	char operat;
	scanf("%d",&operat);
	c=a*b;
	return c;
}
void main()
{
	int x,y,z;
	clrscr();
	printf("Enter a vlaue of A:-");
	scanf("%d",&x);
	printf("Enter a value of B:-");
	scanf("%d",&y);
	z=display(x,y);
	printf("Mulyply is :-%d",z);
	getch();

}