#include<iostream>
#include<stdlib.h>
#include<graphics.h>
using namespace std;
class line1
{
public:
int x1,y1,x2,y2;
void DDA(int x1,int y1,int x2,int y2);
void bresnhms(int x1,int y1,int x2,int y2);
};
void line1 :: DDA(int x1,int y1,int x2,int y2)
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
	delay(50);
	}
}
void line1 :: bresnhms( int x1,int y1,int x2,int y2)
{

int   dx,dy,x,y,po;
dx=x2-x1;
dy=y2-y1;

x=x1;
y=y1;

po=2-dy-dx;

while(x<x2)
{
	if(po>=0)
	{
		putpixel(x,y,1);
		y=y+1;
		po=po+2*dy-2*dx;
	}
	else
	{
		putpixel(x,y,1);
		po=po+2*dy;
	}
	x=x+1;
	delay(50);
}
}


int main()
{
line1 l;
char ans;
int x1,y1,x2,y2,ch;
int gd=DETECT ,gm;
initgraph(&gd,&gm,NULL);
do
{
cout<<"\t\t\tEnter the choice\n\n1.DDA\n2.Bresnhms\n\n";
cin>>ch;
switch(ch)
{
	case 1:cout<<"\nEnter the Two Points (x1,y1) & (x2,y2) \n";
		cin>>x1>>y1>>x2>>y2;
delay(5000);
		l.DDA(x1,y1,x2,y2);
		delay(5000);
		break;
	case 2:cout<<"\nEnter the Two Points (x1,y1) & (x2,y2) \n";
		cin>>x1>>y1>>x2>>y2;
delay(5000);
		l.bresnhms(x1,y1,x2,y2);
		delay(5000);
		break;
}
cout<<"\n\n do you want to continue......\n\n";
cin>>ans;
}while(ans !='n');
}
