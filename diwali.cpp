#include<iostream>
#include<graphics.h>
#include<math.h>
#include<stdlib.h>
using namespace std;
 class D
{
public:
void DDA(int x1,int y1,int x2,int y2)
{
int x,y ,step;
int xin,yin;
int  dx=(x2-x1);
int dy=(y2-y1);
	if(abs(dx)>abs(dy))
	{
	step=abs(dx);
	}
	else
	{
	step=abs(dy);
	}
xin=dx/step;
yin=dy/step;
x=x1;
y=y1;
putpixel(x,y,WHITE);
	for(int i=0;i<step;i++)
	{
	x=x+xin;
	y=y+yin;
	putpixel(x,y,WHITE);
	delay(5);
	}
}
void downwardline( int x1,int y1,int x2,int y2)
{

int   dx,dy,x,y,po;
if(x1>x2)
{
dx=x1-x2;
}
else
{
dx=x2-x1;
}

if(y1>y2)
{
dy=y1-y2;
}
else
{
dy=y2-y1;
}
x=x1;
y=y1;

po=2-dy-dx;

while(x<x2)
{
	if(po>=0)
	{
		putpixel(x,y,WHITE);
		y=y+1;
		po=po+2*dy-2*dx;
	}
	else
	{
		putpixel(x,y,WHITE);
		po=po+2*dy;
	}
	x=x+1;
	delay(10);
}
}
void upwardline( int x1,int y1,int x2,int y2)
{

int   dx,dy,x,y,po;
if(x1>x2)
{
dx=x1-x2;
}
else
{
dx=x2-x1;
}

if(y1>y2)
{
dy=y1-y2;
}
else
{
dy=y2-y1;
}
x=x1;
y=y1;

po=2-dy-dx;

while(x<x2)
{
	if(po>=0)
	{
		putpixel(x,y,WHITE);
		y=y-1;
		po=po+2*dy-2*dx;
	}
	else
	{
		putpixel(x,y,WHITE);
		po=po+2*dy;
	}
	x=x+1;
	delay(10);
}
}
 void happydiwali()
{

//H
DDA(150,150,150,175);
DDA(150,162,175,162);
DDA(175,150,175,175);

//A
upwardline(185,175,210,150);
DDA(200,162,223,162);
downwardline(210,150,235,175);

//P
DDA(245,150,245,175);
DDA(245,150,260,150);
DDA(260,150,260,162);
DDA(245,162,260,162);

//P
DDA(270,150,270,175);
DDA(270,150,285,150);
DDA(285,150,285,162);
DDA(270,162,285,162);

//Y
downwardline(295,150,312,162);
upwardline(312,162,330,150);
DDA(312,162,312,175);
//********************************************************************

//D
DDA(160,225,160,250);
DDA(155,225,180,225);
DDA(155,250,180,250);
DDA(180,225,180,250);

//I
DDA(190,225,210,225);
DDA(200,225,200,250);
DDA(190,250,210,250);

//W
DDA(220,225,220,250);
upwardline(220,250,230,240);
downwardline(230,240,240,250);
DDA(160,225,160,250);
DDA(240,225,240,250);

//A
upwardline(250,250,275,225);
DDA(265,237,290,237);
downwardline(275,225,300,250);

//L
DDA(310,225,310,250);
DDA(310,250,325,250);

//I
DDA(335,225,355,225);
DDA(345,225,345,250);
DDA(335,250,355,250);

}

};
int main()
{
D d;
int gd=DETECT,gm ,i=500,j=500;
initgraph(&gd,&gm,NULL);
cout<<"Namrata's Coding Hub\n\n";

/*points a,b,c,d,e,f,g,h,i,j,k;

putpixel(250,50,WHITE);//a
putpixel(100,100,WHITE);//b
putpixel(400,100,WHITE);//c
putpixel(100,125,WHITE);//d
putpixel(400,125,WHITE);//e
putpixel(0,200,WHITE);//f
putpixel(500,200,WHITE);//g
putpixel(100,275,WHITE);//h
putpixel(400,275,WHITE);//i
putpixel(100,300,WHITE);//j
putpixel(400,300,WHITE);//k
*/

//rope for hanging 
d.upwardline(100,100,250,50);
d.downwardline(250,50,400,100);

//rectangle
rectangle(100,100,400,125);

//hexagoan
d.upwardline(0,200,100,125);//...
d.downwardline(0,200,100,275);
d.downwardline(400,125,500,200);//......
d.upwardline(400,275,500,200);

//rectangle
rectangle(100,275,400,300);

//lines
int j1=1;
for(int i=110;i<400;i++)
{
j1++;
if(j1%2==0)
{
d.DDA(i,300,i,475);
i=i+19;
}
else if(j1%2!=0)
{
d.DDA(i,300,i,450);
i=i+19;
}
}
d.happydiwali();

delay(5000);
closegraph();
return 0;
}
