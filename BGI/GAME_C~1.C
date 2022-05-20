#include<graphics.h>
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<dos.h>
int a=0,x,y,b=0,dly=40,p=200,q=200,r=3,point=0;
void ran()
{     int d,e;
     d = random(629-r);
     e = random(390-r);
     if(d > 15+r && e > 37+r)
     { p =d; q = e;}
     else
	ran();
}
void cir(int f,int g)
{         setcolor(2);
	 if((f+10) > p && (f-10) < p)  // 119 > (100)  // 99 < 100
	 {
		  if(((g+10) > q) && ((g-10) < q))// 139 > 100 && 119 < 100
		  {
		      cleardevice();
		      r++;
		      sound(7);
		      ran();
		      point++;
		  }
		  else
		     circle(p,q,10);
	 }
	 else
	       circle(p,q,10);

}
void draw(int x,int y)
{
       int k;
       cleardevice();
       clrscr();
       printf("\t Points -: %d\t\t\t\t\t\t %d,%d  : : :   ",point,x,y);
       printf("\t\t\t\t:- Game -:\t\t\t\t\t");
       printf("%d",dly);
       cir(x,y);
       setcolor(4);
       circle(x,y,r);
       circle(x,y,2);
       rectangle(7,35,632,396);
       setcolor(15);
}
void out()
{
 if(point==0)
 {
   outtextxy(340,280,"Out Ho Gye Bhiya JI !! ");
   delay(2000);
   exit(0);}
   else
   {
      point--;
      r--;
      sound(100);
   }
}
void speed()
{
    if(r%10==0)
    {
       if(dly>10)
       {
	  dly = dly - 10;
	  r = 2;
	  delay(dly);
       }
       else
       {
	 dly = dly - 1;
	 r = 2;
	 delay(dly);
       }
   }else
     delay(dly);
}

void left()
{        nosound();
	 if(x > (13+r))
		x = x - 5;
	 else{
	       x = x + 5;
	       out();
	     }
	 draw(x,y);
	 delay(100);
	 speed();
}
void right()
{
	nosound();
	if(x < (630 - r))
	    x = x + 5;
	else{
	    x = x - 5;
	    out();
	 }
	 draw(x,y);
	 delay(100);
	 speed();
}
void bottom()
{       nosound();
	if(y < (392 - r))
	    y = y + 5;
	else{
	    y = y - 5;
	    out();
	}
	    draw(x,y);
	    delay(100);
	    speed();
}
void top()
{       nosound();
	if(y > 37 + r)
	    y = y - 5;
	else{
	    y = y + 5;
	    out();
	}
	draw(x,y);
	delay(100);
	speed();
}
void game()
{
     char ch;
     circle(x,y,r);
     cir(x,y);
     rectangle(7,35,362,394);
    while((ch=getch())!=13)
     {
	switch(ch)
	{
	    case 75:
	      while(!kbhit())
		left();
	      break;
	    case 77:
	       while(!kbhit())
		 right();
	       break;
	    case 80:
		while(!kbhit())
		 bottom();
		break;
	    case 72:
		 while(!kbhit())
		    top();
		 break;
	}
     }

}
void start()
{
     int option;
     printf("\nCircle Game -: ");
     printf("\nImportant Points -: ");
     printf("\n\t1. Don't Touch the Circle to The Border.");
     printf("\n\t2.If you Touch the Circle to the border You Lost 1 Point");
     printf("\n\t3.If You Touch the Circle to the border when Points Are 0 than You Out !");
     printf("\t4.You use <- ->  top Bottom To Play Game.");
     printf("\n\t5.Press The Enter To Exit The Game.\n\n");
     printf("Choose the Option : 1. Start Game  2. Exit ");
     printf("\nEnter a Option : ");
     scanf("%d",&option);
     switch(option)
      {
	 case 1:
	    game();
	    break;
	 case 2:
	    exit(0);
	    break;
      }
     //game();
     getch();
}
void main()
{
     int gd = DETECT,gm,i;
     initgraph(&gd,&gm,"C:\\Turboc3\\BGI");
     x = getmaxx()/2;
     y = getmaxy()/2;
     start();
     getch();
}
