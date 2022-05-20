#include<conio.h>
#include<dos.h>
#include<graphics.h>
int inr = 0,option;
void glass()
{
	setcolor(15);

	ellipse(300, 200,0, 360,50, 25);
	ellipse(300, 300, 0, 360,50, 25);
	line(250,200, 250, 300);
	line(350,200, 350, 300);
	ellipse(300, 100, 180, 360, 5,2);
	line(295, 100, 295, 80);
	line(305, 100, 305, 86);
	arc(300, 80, 90, 180, 5);
	putpixel(306, 85, 15);
	putpixel(307, 84, 15);
	line(308, 84,450, 84);
	line(300, 75,303, 75);
	arc(450,70,240,0,5);
	line(313,75,450, 75);
	arc(454,74,240,0,10);
	line(455,72,455,0);
	line(464,73,464,0);
	putpixel(304, 74, 15);
	putpixel(305, 73, 15);
	line(306, 72, 306, 65);
	line(311, 72, 311, 65);
	putpixel(312, 73, 15);
	putpixel(313, 74, 15);
	pieslice(309,62,0,360,5);
	line(295,62,323,62);
	setfillstyle(1,1);
	floodfill(453,80,15);
	setcolor(BLUE);
}
void tap()
{      int inr=0;
       while(!kbhit())
       {
	   arc(300,125+inr,180,360,10);
	   line(300,110+inr,310,125+inr);
	   line(300,110+inr,290,125+inr);
	   setfillstyle(1,1);
	   floodfill(300,125+inr,1);
	   glass();
	   setfillstyle(1,1);
	   floodfill(297,300,15);
	   delay(10);
	   cleardevice();
	   if(inr==150){inr=0;}
	   inr++;
     }
}
void fill_water()
{
	int i = 0,k=0;
	setfillstyle(SOLID_FILL, BLUE);
	setcolor(BLUE);
	while(!kbhit())
	{
		setcolor(LIGHTBLUE);
		ellipse(300, 300-i, 180, 360, 4, 2);
		delay(30);
		fillellipse(300, 300-i, 49, 25);
		setcolor(1);
		line(297, 275-i, 303, 275-i);
		setcolor(15);
		ellipse(300, 200, 180, 360, 50, 25);
		delay(30);
		i = i+1;
		if(i==100)
		   break;
	}
	setcolor(0);
	   for(k=0;k<7;k++){
	   line(297+k,103,297+k,173); }
}
void main()
{
	int gd = DETECT, gm = DETECT,k,i,j;
	char ch;
	initgraph(&gd, &gm,"c:\\turboc3//bgi");
	printf("\nPress Key Down To Fill Water.");
	printf("\nPress Any key to Stop fill Water");
	printf("\nPress Space to Start Program.");
	printf("\nPress Enter to Exit Program.");
	getch();
	glass();
	tap();
	while((ch=getch())!=13)
	{
	     cleardevice();
	     switch(ch)
	     {
			case 80:
			    glass();
			    for(k=0;k<7;k++){
			     line(297+k,103,297+k,300); }
			    fill_water();
			    break;
			case 32:
			    glass();
			    tap();
			    break;
			default:
			   tap();
	     }
	}
	getch();
}
