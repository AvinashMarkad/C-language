//Koch Curve

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<graphics.h>
#define SIN 0.86602540       //sin60
void koch(int x1,int y1,int x2, int y2, int level)
{
int xx,yy,x[5],y[5],lx,ly,offx=50,offy=300;
lx=(x2-x1)/3;
ly=(y2-y1)/3;
x[0]=x1;
y[0]=y1;
x[4]=x2;
y[4]=y2;
x[1]=x[0]+lx;
y[1]=y[0]+ly;
x[3]=x[0]+(2*lx);
y[3]=y[0]+(2*ly);
xx=x[3]-x[1];
yy=y[3]-y[1];
x[2]=xx*(0.5)+yy*(SIN);
y[2]=-xx*(SIN)+yy*(0.5);
x[2]=x[2]+x[1];
y[2]=y[2]+y[1];
if(level>0)
{
koch(x[0],y[0],x[1],y[1],level-1);
koch(x[1],y[1],x[2],y[2],level-1);
koch(x[2],y[2],x[3],y[3],level-1);
koch(x[3],y[3],x[4],y[4],level-1);
}
else
{
line(offx+x[0],offy+y[0],offx+x[1],offy+y[1]);
line(offx+x[1],offy+y[1],offx+x[2],offy+y[2]);
line(offx+x[2],offy+y[2],offx+x[3],offy+y[3]);
line(offx+x[3],offy+y[3],offx+x[4],offy+y[4]);
}
}
void main()
{
int x1=0,x2=550,y1=0,y2=0;
int gd=DETECT,gm,n;
initgraph(&gd,&gm,"c:\\tc\\bgi");
printf("\n Enter the level of curve generation");
scanf("%d",&n);
koch(x1,y1,x2,y2,n);
getch();
closegraph();
}