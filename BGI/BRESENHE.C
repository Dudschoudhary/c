#include<conio.h>
#include<graphics.h>
void main()
{
	int gd=DETECT,gm,m,dx,dy,p,i,x1,x2,y1,y2;
	initgraph(&gd,&gm,"C://TURBOC3//BGI");

	printf("Enter x1 -: ");
	scanf("%d",&x1);
	printf("Enter y1 -: ");
	scanf("%d",&y1);
	printf("Enter x2 -: ");
	scanf("%d",&x2);
	printf("Enter y2 -: ");
	scanf("%d",&y2);

	dx = x2-x1;
	dy = y2-y1;
	m = dy/dx;
	p = (2*dy) - dx;
	putpixel(x1,y1,15);

	for(i=0; i<dx ; i++)
	{
		if(p < 0)
		{
			putpixel(x1++,y1,15);
			p = p+(2*dy);
		}
		else
		{
			putpixel(x1++,y1++,15);
			p = p+((2*dy)-(2*dx));
		}
		delay(50);
	}
	getch();
	closegraph();
}


