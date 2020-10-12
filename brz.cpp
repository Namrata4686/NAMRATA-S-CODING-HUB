#include<iostream>
#include<graphics.h>
using namespace std;
class A
{
public:
double dx,dy,h;
double x1,y1,x2,y2,x3,y3,xinc,yinc;
double xc,yc,rin,rout,x,y;
void cir1()
{
brz(rin);
}
void cir2()
{
rout=2* rin;
brz(rout);
cout<<"circle 2";
}
void getdata()
{
cout<<"ENTER THE CENTER CO-ORDINATES XC ,YC ....\n";
cin>>xc>>yc;
cout<<"\nENTER RADIUS OF INNER CIRCLE \n";
cin>>rin;
}
void brz(int rin)
{
x=0;
y=rin;
int d;
d=3-(2*rin);
do
{

putpixel(-x+xc,y+yc,RED);
	if(d<=0)
	{
	d=d+ (4*x)+6;
	}
	else if(d>0)
	{
	d=d+ (4*(x-y)) +10;
	y--;	
	}
	x++;
putpixel(x+xc,y+yc,RED);
putpixel(y+xc,x+yc,YELLOW);
putpixel(y+xc,-x+yc,WHITE);
putpixel(x+xc,-y+yc,GREEN);
putpixel(-x+xc,-y+yc,RED);
putpixel(-y+xc,-x+yc,YELLOW);
putpixel(-y+xc,x+yc,BLUE);
putpixel(x+xc,y+yc,WHITE);
}while(x<=y);
delay(1000);
}
};
class B : public A
{
public:
int steps,i;
int sign(float);
void dda(float x1,float y1,float x2,float y2 )
{
dx=x2-x1;
dy=y2-y1;
	if(abs(dx) >=abs(dy))
	{
	steps=abs(dx);
	}
	else if( abs(dx) <= abs(dy))
	{
	steps=abs(dy);
	}
x=x1;
y=y1;
xinc=dx/steps;
yinc=dy/steps;
//putpixel(x1,y1,WHITE);
for(i=1;i<=steps;i++)
{
x=x+xinc;
y=y+yinc;
putpixel(x,y,WHITE);
}
}
void tri()
{
h=1.73*rin;
x1=xc+h;
	y1=yc+rin;
	x2=xc-h;
	y2=yc+rin;
	x3=xc;
	y3=yc-(2* rin);
dda(x1,y1,x2,y2);
dda(x2,y2,x3,y3);
dda(x3,y3,x1,y1);
delay(1000);
}
};
int main()
{
B a;
int gd=DETECT,gm;
initgraph(&gd,&gm,NULL);
a.getdata();
a.cir1();
delay(10000);
a.cir2();
delay(10000);
a.tri();
delay(20000);
}
