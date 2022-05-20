#include<stdio.h>
#include<conio.h>
void main()
{
     char c;
     int a=10,b=5;
     clrscr();

     printf("for add press A \n for minus then press s\n");
     c = getchar();

     if(c == 'a')
     {
	 printf("Add is : %d",(a+b));
     }
     else if(c == 's')
     {
	 printf("Minus is : %d",(a-b));
     }
     else if(c == 'm')
     {
	 printf("Multiply is : %d",(a*b));
     }
     else if(c == 'd')
	 printf("divide is : %d",(a/b));
     else
	printf("Invalid !...");


   getch();
}