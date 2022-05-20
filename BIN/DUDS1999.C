#include<conio.h>
#include<conio.h>
void main()
{
	int i,j;
	clrscr();
	printf("Enter a frist values:-");
	scanf("%d",&j);
for(i=1;i<=10;i++)
{
	i=i*j;
	printf("%d %d",i,j);
}
getch();
}
