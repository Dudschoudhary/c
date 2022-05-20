#include<graphics.h>
#include<conio.h>
void main()
{
	int gd = DETECT,i=0,gm;
	initgraph(&gd,&gm,"C:\\TurboC3\\BGI");
	setlinestyle(0,0,2);
    for(i=639;i>-500;i--)
	{
		line(20+i,200,103+i,170);
		line(103+i,170,111+i,170);
		line(111+i,170,126+i,170);
		line(126+i,170,138+i,172);
		line(138+i,172,158+i,178);
		line(158+i,178,149+i,190);
		line(149+i,190,157+i,217);
		line(20+i,200,39+i,220);

		line(39+i,220,26+i,237);
		line(26+i,237,80+i,237);
		arc(107+i,215,325+i,220,35);
		line(135+i,237,482+i,237);
		arc(510+i,215,325+i,220,35);

		line(138+i,172,189+i,157);
		line(189+i,157,240+i,143);
		line(240+i,143,294+i,129);
		line(294+i,129,334+i,123);
		line(334+i,123,362+i,122);
		line(362+i,122,404+i,125);
		line(404+i,125,468+i,136);
		line(468+i,136,537+i,155);
		line(537+i,155,600+i,171);

		line(600+i,171,561+i,183);

		line(587+i,176,579+i,198);
		line(579+i,198,585+i,202);
		line(585+i,202,598+i,200);
		line(600+i,171,599+i,182);
		line(599+i,182,586+i,181);
		line(598+i,182,598+i,200);
		line(598+i,200,599+i,213);
		line(599+i,200,597+i,222);
		line(597+i,222,580+i,231);
		line(580+i,231,537+i,236);

		line(142+i,224,411+i,217);
		line(411+i,217,438+i,185);

		line(20+i,200,58+i,200);
		line(40+i,204,54+i,218);
		line(54+i,218,46+i,228);

		line(37+i,196,47+i,192);
		line(47+i,192,42+i,197);
		line(42+i,197,37+i,196);

		line(149+i,189,460+i,162);
		line(355+i,171,338+i,218);
		line(392+i,167,450+i,189);

		line(315+i,180,343+i,178);
		line(343+i,178,342+i,181);
		line(342+i,181,315+i,183);
		line(315+i,183,315+i,180);

		line(156+i,180,461+i,151);

		line(147+i,174,215+i,153);
		line(215+i,153,274+i,138);
		line(274+i,138,325+i,129);
		line(325+i,129,362+i,126);
		line(362+i,126,388+i,129);
		line(388+i,129,422+i,134);
		line(422+i,134,440+i,140);
		line(440+i,140,460+i,151);
		line(400+i,131,450+i,152);

		line(340+i,128,345+i,162);
		line(351+i,127,356+i,161);
		line(345+i,162,355+i,170);

		line(157+i,173,163+i,185);
		line(163+i,185,167+i,185);
		line(167+i,185,165+i,179);
		line(165+i,179,174+i,178);
		line(174+i,178,179+i,173);
		line(179+i,173,173+i,170);
		line(173+i,170,157+i,174);

		circle(107+i,215,30);
		circle(107+i,215,27);
		circle(107+i,215,10);

		circle(510+i,215,30);
		circle(510+i,215,27);
		circle(510+i,215,10);

		cleardevice();
		delay(20);


       }
/*
	setfillstyle(SOLID_FILL,4);
	floodfill(200,200,15);
	setfillstyle(SOLID_FILL,4);
	floodfill(200,225,15);
	setfillstyle(SOLID_FILL,4);
	floodfill(384,192,15);
	setfillstyle(SOLID_FILL,4);
	floodfill(282,173,15);
	setfillstyle(SOLID_FILL,12);
	floodfill(589,193,15);
	setfillstyle(SOLID_FILL,15);
	floodfill(592,179,15);
	setfillstyle(SOLID_FILL,15);
	floodfill(329,180,15);
	setfillstyle(SOLID_FILL,8);
	floodfill(169,174,15);
	setfillstyle(SOLID_FILL,7);
	floodfill(259,156,15);
	setfillstyle(SOLID_FILL,4);
	floodfill(346,139,15);
	setfillstyle(SOLID_FILL,7);
	floodfill(378,140,15);
	setfillstyle(SOLID_FILL,8);
	floodfill(450,147,15);
	setfillstyle(SOLID_FILL,8);
	floodfill(163,182,15);
	setfillstyle(SOLID_FILL,15);
	floodfill(42,196,15);
	setfillstyle(SOLID_FILL,8);
	floodfill(101,211,15);
	setfillstyle(SOLID_FILL,8);
	floodfill(515,214,15);
*/

	getch();
	closegraph();
}
