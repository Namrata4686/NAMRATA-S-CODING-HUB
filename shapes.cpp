#include<iostream>
#include<stdlib.h>
#include<graphics.h>
#include<math.h>
using namespace std;
int main()
{
int gd=DETECT ,gm;
initgraph(&gd,&gm,NULL);
//How to draw line
line(100,100,100,200);
//How to draw circle
circle(350,150,50);
//How to draw rectangle
rectangle(300,300,400,450);
//how to draw triangle
line(100,450,200,450);
line(150,363,100,450);
line(150,363,200,450);
delay(4000);
closegraph();
return 0;
}
