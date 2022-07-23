#include<iostream.h>
#include<conio.h>
#include<math.h>
#include<stdlib.h>
#include<dos.h>
#include<graphics.h>
void dda(int x1,int y1,int x2,int y2);
void main()
{
int gd=DETECT,gm;
int x1,y1,x2,y2;
intgraph(&gd,&gm,"c:\\tcplus\\bgi");
cleardevice();
cout<<"DDA line genration aldorithm";
cout<<"\n enter the strarting co-ordinates for drowing line";
cin>>x1>>y1;
cout<<"\n enter the ending co-ordinate";
cin>>x2>>y2;
dda(x1,y1,x2,y2);
cout<<"\n Thank You";
getch();
closegraph();
}
void dda(int x1,int y1,int x2,int y2)
{
int i,dx,dy,steps;
float x,y;
float xinc,yinc;
dx=(x2-x1);
dy=(y2-y1);
if(abs(dx)>=abs(dy))
steps=dx;
else
steps=dy;
xinc=(float)dx/steps;
yinc=(float)dy/steps;
x=x1;
y=y1;
putpixel(x,y,WHITE);
for(i=1;i<steps;i++)
{
x=x+xinc;
y=y+yinc;
x1=x+0.5;
y1=y+0.5;
putpixel(x1,y1,WHITE);
}
}