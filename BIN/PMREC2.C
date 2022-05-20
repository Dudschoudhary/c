#include<stdio.h>
#include<conio.h>
int i=0;
int counting()
{
     i++;//1
     printf("%d\t",i);  //1
     if(i>=100) // 1>=100
       return 0;

     counting();
}
void main()
{
    clrscr();
    counting();
    getch();
}