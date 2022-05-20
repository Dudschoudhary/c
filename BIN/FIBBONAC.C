#include<conio.h>
#include<conio.h>
void add(int a, int b)
{
	int c;
	c=a+b;
	printf("\nadd is:-%d",c);
}
void sub(int a,int b)
{
	int s;
	s=a-b;
	printf("\nsubtration is:-%d",s);
}
void mult(int o,int t)
{
	int p;
	p=o*t;
	printf("\nmultply is :-%d",p);
}
void dived(int d,int k)
{
	int n;
	n=d/k;
	printf("\ndividations is:-%d",n);


}
void main()
{
int x,y;
clrscr();
scanf("%d %d",&x,&y);
add(x,y);
scanf("%d %d",&x,&y);
sub(x,y);
scanf("%d %d",&x,&y);
mult(x,y);
scanf("%d %d",&x,&y);
dived(x,y);
getch();
}