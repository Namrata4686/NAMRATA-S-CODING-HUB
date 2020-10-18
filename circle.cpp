#include<iostream>
#include<stdlib.h>
#include<graphics.h>
#include<math.h>
using namespace std;
class A
{
public:
int x1,y1,r,x,y,d;
void getdata()
{
cout<<"\nEnter the center co-ordinates of the circle\n";
cin>>x1;
cin>>y1;
cout<<"\nEnter the radius of the circle\n";
cin>>r;
}
};
class B : public A
{
public:
void circle1()
{
x = 0;
	 y = r; d = 3-(2*r);

do{
		putpixel(x+x1,y+y1,RED);
		putpixel(y+x1,x+y1,BLUE);
		putpixel(y+x1,-x+y1,GREEN);
		putpixel(x+x1,-y+y1,WHITE);
		putpixel(-x+x1,-y+y1,CYAN);
		putpixel(-y+x1,-x+y1,MAGENTA);
		putpixel(-y+x1,x+y1,BROWN);
		putpixel(-x+x1,y+y1,YELLOW);


		if(d<=0)
			d = d+(4*x)+6;

		else if(d>0)
		{
			d = d+(4*(x-y))+10;
			y--;
		}

		x++;
	}while(x<=y);

	delay(5000);


}
};
int main()
{
B b;
//char ans;
//int x1,y1,x2,y2,ch;
int gd=DETECT ,gm;
initgraph(&gd,&gm,NULL);
b.getdata();
b.circle1();
delay(5000);
return 0;
}
