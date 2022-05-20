#include<graphics.h>
#include<stdio.h>
#include<conio.h>
#include<math.h>
int rx,ry,rxm,rym,rxh,ryh,s1,s2,s3,s4,m1,m2,m3,m4,h1,h2,h3,h4,i,j,k;
int min=0,hr=12,sec=0;
double Sradian,Mradian,Hradian;
void hor(int deg)
{
	Hradian=deg*0.01745;
	rxh=(int)(h1 +((h3-h1)*cos(Hradian)-(h4-h2)*sin(Hradian)));
	ryh=(int)(h2 +((h3-h1)*sin(Mradian)+(h4-h2)*cos(Hradian)));
	setcolor(1);
	setlinestyle(0,1,3);
	line(h1,h2,rxh,ryh);
	pieslice(rxh,ryh,1,360,3);
	setlinestyle(0,1,1);
}
void munite(int deg)
{
	Mradian=deg*0.01745;
	rxm=(int)(s1 +((m3-m1)*cos(Mradian)-(m4-m2)*sin(Mradian)));
	rym=(int)(s2 +((m3-m1)*sin(Mradian)+(m4-m2)*cos(Mradian)));
	setcolor(2);
	setlinestyle(0,1,2);
	line(m1,m2,rxm,rym);
	pieslice(rxm,rym,1,360,2);
	setcolor(1);
	setlinestyle(0,1,3);
	hor(k);
	setlinestyle(0,1,1);
}

void second(int deg)
{
	Sradian=deg*0.01745;
	rx=(int)(s1 +((s3-s1)*cos(Sradian)-(s4-s2)*sin(Sradian)));
	ry=(int)(s2 +((s3-s1)*sin(Sradian)+(s4-s2)*cos(Sradian)));
	setcolor(RED);
	line(s1,s2,rx,ry);
	pieslice(rx,ry,1,360,1);
	pieslice(s1,s2,0,360,5);
	munite(j);
	printf("%d : %d : %d ",hr,min,sec);
	delay(1000);
}
void design()
{
	setcolor(15);
	circle(s1,s2,190);
	setfillstyle(1,0);
	floodfill(300,200,15);
	settextstyle(4,0,4);
	outtextxy(300,40,"12");
	outtextxy(300,375,"6");
	outtextxy(395,60,"1");
	outtextxy(210,70,"11");
	outtextxy(455,120,"2");
	outtextxy(160,123,"10");
	outtextxy(479,210,"3");
	outtextxy(145,210,"9");
	outtextxy(450,300,"4");
	outtextxy(168,300,"8");
	outtextxy(395,355,"5");
	outtextxy(220,350,"7");
	settextstyle(5,0,1);
	setcolor(8);
	outtextxy(255,120,"Prakash Solanki");
	outtextxy(255,123,"...............");
	outtextxy(285,300,".............");
	setcolor(15);
}
void main()
{
	int gd=DETECT,gm;
	double degree;
	initgraph(&gd,&gm,"C://TURBOC3//BGI");
	cleardevice();
	 s1 = getmaxx()/2; s2 = 230;
	 s3 = s1; s4 = 100;
	 m1 = s1; m2 = s2;
	 m3 = s3; m4 = s4+30;
	 h1 = s1; h2 = s2;
	 h3 = s3; h4 = s4+60;
	line(s1,s2,s3,s4);
	line(m1,m2,m3,m4);
	i = 0; j = 0; k = 0;
	while(!kbhit())
	{
	   cleardevice();
	   clrscr();
	   design();
	   second(i);
	   if(i==360)
	   {
	     j=j+6;
	     munite(j);
	     k = k+1;
	     hor(k);
	   }

	   if(i == 360){
	      i = 0;
	      if(min == 360)
		min = 0;
	      else
		min++;
	   }

	   i = i + 6;
	   sec++;
	   if(sec==61)
	     sec = 0;
	}
	getch();
}