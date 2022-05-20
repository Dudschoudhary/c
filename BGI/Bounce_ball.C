#include <stdio.h>
#include <conio.h>
#include <graphics.h>
#include <dos.h>
int i, x, y=0,call=0,inr=0;
void dcr()
{
		  x = 50;
		  while(!kbhit())
		  {
		      setcolor(RED);
		      setfillstyle(SOLID_FILL, RED);
		      circle(x, y, 30);
		      floodfill(x, y, RED);
		      delay(20);
		     if(y<=inr)
			call = 0;
		      else if(y > 430)
			call = 1;
			if(call==0)
			   y=y+5;
			else
			   y=y-5;
		      cleardevice();
		      if(y%15==0)
			 inr=inr+1;
		      if(y%30==0)
			 x = x+3;
		      if(inr>400)
			 break;
		  }
}
void main() {
		int gd = DETECT, gm;
		char ch;
		initgraph(&gd, &gm, "C:\\turboc3\\BGI");
		while ((ch=getch())!=13)
		{
		     switch(ch)
		     {
			case 80:
			  sound(2000);
			  delay(10);
			nosound();
			  dcr();
			  inr = 0;
			  break;
			case 37:
			  exit(0);
		     }
		}
    getch();
    closegraph();
}