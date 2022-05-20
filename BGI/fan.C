#include<graphics.h>
#include<stdio.h>
#include<conio.h>
#include<math.h>
#define rad 3.14/180
int x1,y1,x2,y2,p1,q1,p2,q2,m1,n1,m2,n2;
double degree,radian;
int rx,ry,rx1,ry1,rx2,ry2;
void design()
{
	pieslice(x1,y1,0,360,10);
	line(x1,y1,x1,y1+248);
	line(0,450,600,450);
	circle(x1,y1,120);

}
void blade1(int degree)
{
	design();
	radian=degree*rad;
	rx=(int)(p1 +((p2-p1)*cos(radian)-(q2-q1)*sin(radian)));
	ry=(int)(q1 +((p2-p1)*sin(radian)+(q2-q1)*cos(radian)));

	rx1=(int)(x1 +((x2-x1)*cos(radian)-(y2-y1)*sin(radian)));
	ry1=(int)(y1 +((x2-x1)*sin(radian)+(y2-y1)*cos(radian)));

	rx2=(int)(m1 +((m2-m1)*cos(radian)-(n2-n1)*sin(radian)));
	ry2=(int)(n1 +((m2-m1)*sin(radian)+(n2-n1)*cos(radian)));

	setlinestyle(0,1,3);
	line(x1,y1,rx,ry);
	line(x1,y1,rx+10,ry+10);
	line(rx,ry,rx+10,ry+10);

	line(p1,q1,rx1,ry1);
	line(p1,q1,rx1+10,ry1+10);
	line(rx1,ry1,rx1+10,ry1+10);

	line(m1,n1,rx2,ry2);
	line(m1,n1,rx2+10,ry2+10);
	line(rx2,ry2,rx2+10,ry2+10);
	design();
	delay(5);

}
void main()
{
	int gd=DETECT,gm,i;
	char ch;
	initgraph(&gd,&gm,"C://TURBOC3//BGI");
	cleardevice();
	x1 = getmaxx()/2; x2 = x1;
	y1 = 200; y2 = 100;
	p1 = x1; q1 = 200;
	p2 = x1+100; q2 = 210;
	m1 = x1; n1 = 200;
	m2 = x1-80; n2 = 240;
	line(x1,y1,x2,y2);
	line(p1,q1,p2,q2);
	line(m1,n1,m2,n2);
	design();
	while((ch=getch())!=13)
	{
	  switch(ch)
	   {
		case 80:
		 while(!kbhit())
		 {
		    cleardevice();
		    blade1(i);
		    i=i+1;
		    if(i==360)
		      i=0;
		 }
		 break;
		default:
		  design();
	   }
	}
	getch();
	closegraph();
}