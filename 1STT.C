#include<stdio.h>

#include<graphics.h>

#include<conio.h>
void main()
{
int gd=DETECT,gm;
initgraph(&gd,&gm,"c:\\turboc3\\bgi");
putpixel(120,120,RED);
line(150,300,250,220);
circle(250,200,50);
ellipse(250,200,0,360,100,50);
rectangle(150,150,450,450);
line(150,150,450,150);
line(150,150,300,300);
line(450,150,300,300);
getch();
closegraph();
}