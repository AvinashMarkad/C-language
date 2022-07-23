// Flood Fill 8 Connected

#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
void fillcolor(int,int,int,int);
void main()
{ int gd=DETECT,gm;
detectgraph(&gd,&gm);
initgraph(&gd,&gm,"c:\\turboc3\\bgi");
rectangle(50,50,100,100);
fillcolor(55,55,0,11);
getch();
closegraph();
}
void fillcolor(int x,int y,int old_color,int new_color)
 {
if(getpixel(x,y)==old_color)
{
delay(5);
putpixel(x,y,new_color);
fillcolor(x+1,y,old_color,new_color);
fillcolor(x-1,y,old_color,new_color);
fillcolor(x,y+1,old_color,new_color);
fillcolor(x,y-1,old_color,new_color);
fillcolor(x+1,y+1,old_color,new_color);
fillcolor(x+1,y-1,old_color,new_color);
fillcolor(x-1,y-1,old_color,new_color);
fillcolor(x-1,y+1,old_color,new_color);

 }

}

