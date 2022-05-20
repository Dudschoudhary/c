#include<graphics.h>
#include<stdio.h>
#include<conio.h>
void main()
{
     int gd = DETECT,gm,l1,l2,i;
     initgraph(&gd,&gm,"C:\\Turboc3\\BGI");

	setlinestyle(0,1,3);

	line(168,55,56,167);
	line(168,55,280,167);
	line(168,72,64,176);
	line(168,72,272,176);

	line(56,167,65,176);
	line(281,167,272,176);

	line(79,161,79,315);
	line(257,161,257,315);
	line(79,315,257,315);

	line(196,83,445,83);
	line(445,83,544,182);
	line(544,182,257,182);
	rectangle(257,182,520,315);

	l1 = 118;
	l2 = 144;
	for(i=0;i<3;i++)
	{
	   line(144,l1,193,l1);
	   line(l2,117,l2,157);
	   l2+=25;
	   l1+=19;
	}

	// window
	rectangle(110,200,228,271);
	rectangle(120,210,218,261);
	line(149,209,149,262);
	line(188,209,188,262);

	// cimni
	rectangle(382,69,407,83);
	rectangle(376,56,413,69);

	// door
	rectangle(289,213,342,306);
	rectangle(281,306,350,315);
	circle(300,262,3);


	// window

	rectangle(371,201,456,269);
	rectangle(380,210,447,260);
	line(414,209,414,260);

   //   colors
	setfillstyle(11,3);
	floodfill(300,100,15);
	setfillstyle(2,15);
	floodfill(300,200,15);
	floodfill(100,200,15);
	setfillstyle(11,4);
	floodfill(330,262,15);
	setfillstyle(1,3);
	floodfill(386,220,15);

	floodfill(420,215,15);
	floodfill(125,215,15);
	floodfill(155,215,15);
	floodfill(190,215,15);

     getch();
}