#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,k=0,count,a[25];
	clrscr();

	for(i=2;i<=100;i++)
	{
	   count=0;
	   for(j=1;j<=100;j++)
	   {
		if(i%j==0)
		   count++;


	   }
	   if(count==2)
	   {
	      a[k] = i;
	      k++;
	   }
	}
	for(i=0;i<25;i++)
	{
	   printf("%d\t",a[i]);
	}


	  getch();
}

//   2  =>  1,2 => 2
//   3  =>  1,3 => 2
//   4  =>  1,2,4 => 3
//   5  =>  1,5
//   6  =>  1,2,3,6
//   7  =>  1,7
