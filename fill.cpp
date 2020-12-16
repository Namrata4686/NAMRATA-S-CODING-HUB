#include<iostream>
#include<stdlib.h>
#include<graphics.h>
#include<math.h>
using namespace std;
//floodfill aglo use to fill the color in the rectangle
void floodfill(int x, int y, int old_color ,int new_color)
{
int current=getpixel(x,y);
if(current==old_color)
	{
	putpixel(x,y,new_color);
	floodfill(x+1,y,old_color,new_color);
	floodfill(x,y-1,old_color,new_color);
	floodfill(x-1,y,old_color,new_color);
	floodfill(x,y+1,old_color,new_color);
	}
}
int main()
{
int gd=DETECT ,gm;
initgraph(&gd,&gm,NULL);
//first rectangle
rectangle(100,100,200,200);
delay(5000);
floodfill(150,150,0,01);
//second rectangle
rectangle(250,100,400,400);
delay(5000);
floodfill(320,250,0,05);



delay(4000);
closegraph();
return 0;
}
