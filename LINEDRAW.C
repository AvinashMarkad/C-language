#include<stdio.h>
#include<graphics.h>
void main()
{
int gd=DETECT,gm;
initgraph(&gd,&gm,"c:/tc/bgi");
line(200,200,100,100);
getch();
closegraph();
restorecrtmode();
}