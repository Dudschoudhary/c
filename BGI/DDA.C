#include<graphics.h>
#include<stdio.h>
#include<conio.h>
void main()
{
		int gd = DETECT,gm,i,x1,y1,x2,y2,dx,dy;
		float x,y,xinc,yinc,steps;
		initgraph(&gd,&gm,"C:\\Turboc3\\BGI");

		printf("Enter x1 -: ");
		scanf("%d",&x1);  // 5
		printf("Enter y1 -: ");
		scanf("%d",&y1);  // 4
		printf("Enter x2 -: ");
		scanf("%d",&x2);  // 12
		printf("Enter y2 -: ");
		scanf("%d",&y2);  // 7

		dx = x2 - x1;     // 7
		dy = y2 - y1;     // 3

		if(abs(dx) >= abs(dy))
		     steps = abs(dx);  // 7
		else
		    steps = abs(dy);

		xinc = dx/steps;   // 1
		yinc = dy/steps;   // 0.4

		putpixel(x1,y1,15); //  5,4

		x = x1 ; y = y1;   // 5  ,  4

		for(i=1;i<=steps;i++)
		{
		    x = x+xinc;
		    y = y+yinc;
		    putpixel(x,y,15);
		    delay(-1);
		}
    getch();
}









