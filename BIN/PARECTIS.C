#include<stdio.h>
#include<conio.h>
void main()
{
	 int a[5],r,large;
	 clrscr();

	 printf("Enter value in Array : ");
	 for(r=0;r<=4;r++)
	 {
	    scanf("%d",&a[r]);
	 }
	 large = a[0];
	 for(r=1;r<5;r++)
	 {
	       if(large < a[r])
	       {
		  large = a[r];
	       }
	 }
	  printf("\nLarge is : %d",large);
   getch();
}