#include<graphics.h>
#include<stdio.h>
#include<conio.h>
void main()
{
		int gd = DETECT,gm,i,j,k;
		initgraph(&gd,&gm,"C:\\Turboc3\\BGI");
		setlinestyle(0,1,2);


		// face
		circle(320,240,90);

		setfillstyle(1,6);
		floodfill(320,240,15);
		// cap
		line(315,50,236,205);
		line(315,50,404,205);

		setfillstyle(10,15);
		floodfill(320,60,15);

		//eyes
		ellipse(280,220,0,360,12,20);
		ellipse(363,220,0,360,12,20);
		arc(280,230,0,180,9);
		arc(363,230,0,180,9);

		setfillstyle(1,0);
		floodfill(280,230,15);
		floodfill(363,230,15);

		setfillstyle(1,15);
		floodfill(280,210,15);
		floodfill(363,205,15);

		// nose
		ellipse(320,250,0,360,12,15);
		setfillstyle(1,12);
		floodfill(320,250,15);


		//  mouth
		arc(320,225,220,320,70);
		arc(320,285,190,350,25);

		setfillstyle(1,4);
		floodfill(320,300,15);

		arc(274,277,92,192,10);
		arc(364,277,350,80,10);

		arc(230,217,60,270,20);
		arc(230,277,90,315,40);
		arc(280,340,118,18,40);
		arc(360,338,165,60,40);
		arc(410,277,218,90,40);
		arc(410,217,270,120,20);

		setfillstyle(1,1);
		floodfill(215,217,15);
		floodfill(425,217,15);
		outtextxy(215,217,"..");
		setfillstyle(1,4);
		floodfill(230,277,15);
		setfillstyle(1,10);
		floodfill(410,277,15);
		setfillstyle(1,1);
		floodfill(280,340,15);
		setfillstyle(1,9);
		floodfill(360,338,15);





		// colors

	 getch();
}