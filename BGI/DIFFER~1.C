#include<graphics.h>
#include<stdio.h>
#include<conio.h>
void main()

{
	int gd = DETECT,gm,maxx,maxy,x=0,y=0,i,x_axis,y_axis;
	int points[] = {400,140,450,220,340,220,400,140};
	int points2[]= {550,140,600,220,500,220,550,140};
	initgraph(&gd,&gm,"C:\\Turboc3\\BGI");
	maxx = getmaxx();
	maxy = getmaxy();
	x_axis = maxx/4;
	y_axis = maxy/4;
	for(i=0;i<5;i++)
	{
	   line(0,y,maxx,y);
	   y = y+y_axis;
	   line(x,0,x,maxy);
	   x = x+x_axis;
	}

	line(140,20,15,105);
	circle(235,60,40);
	rectangle(340,20,455,95);
	arc(558,45,180,360,40);
	ellipse(80,180,0,360,50,30);
	fillellipse(240,180,50,30);
	drawpoly(4,points);
	fillpoly(4,points2);
	moveto(30,300);
	lineto(125,300);
	bar(350,400,450,450);
	bar3d(350,270,450,340,10,1);
	pieslice(240,310,0,135,50);
	putpixel(550,300,15);
	outtextxy(50,420,"Hello");
	moveto(220,420);
	outtext("Hello");
	circle(560,420,15);
	setfillstyle(2,1);
	floodfill(560,420,15);
	getch();
}






