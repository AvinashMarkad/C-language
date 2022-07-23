#include<stdio.h>
 #include<conio.h>
 #include<graphics.h>
#include<dos.h>
void boundary_fill(int,int,int,int);
void main()
{ int gd,gm; 
detectgraph(&gd,&gm);
initgraph(&gd,&gm,"c:\\turboc3\\bgi");
rectangle(50,50,100,100); 
boundary_fill(55,55,6,15); 
getch();
closegraph();
 } 
void boundary_fill(int x,int y,int fcolor,int bcolor) 
{
if((getpixel(x,y)!=bcolor)&&(getpixel(x,y)!=fcolor)) 
{
delay(5); 
putpixel(x,y,fcolor); 
boundary_fill(x+1,y,fcolor,bcolor); 
boundary_fill(x-1,y,fcolor,bcolor); 
boundary_fill(x,y+1,fcolor,bcolor); 
boundary_fill(x,y-1,fcolor,bcolor); 
boundary_fill(x+1,y+1,fcolor,bcolor); 
boundary_fill(x-1,y+1,fcolor,bcolor); 
boundary_fill(x+1,y-1,fcolor,bcolor); 
boundary_fill(x-1,y-1,fcolor,bcolor); 
} 
}