#include<conio.h>
	#include<conio.h>
void add(int a, int b)
{
	int c;
	c=a+b;
	printf("\nadd is:%d",c);
}
void sub(int a,int b)
{
	int s;
	s=a-b;
	printf("\nsubtration is:%d",s);
}
void mult(int o,int t)
{
	int p;
	p=o*t;
	printf("\nmultply is :%d",p);
}
void dived(int d,int k)
{
	int n;
	n=d/k;
	printf("\ndividations is:%d",n);


}
void main()
{
int i, x=20,y=4;
clrscr();
scanf("%d",&i);
switch(i)
{
case 1 : add(x,y);
break;
case 2 : sub(x,y);
break;
case 3 : mult(x,y);
break;
case 4 : dived(x,y);
break;
default : printf("worng value:-");
}
getch();
}