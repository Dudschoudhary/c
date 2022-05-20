#include<stdio.h>
#include<conio.h>
float r;
int multply(float p, float q)
{
	r=p*q;
	return r;
}
int divid(float p, float q)
{
	r=p/q;
	return r;
}
void main()
{
	float a,b;
	float c;
	clrscr();
	printf("Enter frist value:-\n");
	scanf("%f",&a);
	printf("Enter second value \n");
	scanf("%f",&b);
	c=multply(a,b);
	printf("Multply tow numbers:-%f\n",c);
	c=divid(a,b);
	printf("Dividetion of two number:-%f\n",c);
	getch();
}