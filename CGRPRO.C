#include<stdio.h>
#include<graphics.h>
#include<stdlib.h>
#include<conio.h>
#include<dos.h>
#define ScreenWidth getmaxx()
#define ScreenHeight getmaxy()
#define GroundY ScreenHeight*0.88

void car(int i){
  setviewport(0,0,550,440,1);
  rectangle(50+i,275,150+i,400);
  rectangle(150+i,350,200+i,400);
  circle(75+i,410,10);
  circle(175+i,410,10);
  delay(100);

  clearviewport();
}


void Rain(int x)
{
int i,rx,ry;
for(i=0;i<400;i++)
{
 rx=rand() % ScreenWidth;
 ry=rand() % ScreenHeight;
 if(ry<GroundY-4)
 {
  if(ry<GroundY-120 || (ry>GroundY-120 && (rx<x-20 || rx>x+60)))
  line(rx,ry,rx+0.5,ry+4);
 }
}
}
void main()
{

  int gd=DETECT,gm,x=0,i=-100 ;
  initgraph(&gd,&gm,"C:\\TC\\BGI");
  while(!kbhit())
  {

   //Draw Ground
   line(0,GroundY,ScreenWidth,GroundY);
   Rain(x);
   car(i);

   cleardevice();
   x=(x+2)%ScreenWidth;
   if(i<=570)
   i=i+10;
   else
   {i=-100; i=i+10;}
}
  getch();
}
