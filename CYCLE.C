#include<stdio.h>
#include<graphics.h>
  int main()
   {
    int gd = DETECT, gm ;
    int i;
    initgraph(&gd,&gm,"c://turboc3//bgi");
    for(i = 0; i < 500; i++){
      circle(200 + i,300,30);
      circle(350 + i,300,30);
      arc(200 + i, 300, 0, 180, 34);
      arc(350 + i, 300, 30, 195, 34);
      line(200 + i,300,270 + i,300);
      line(200 + i,240,200 + i,300);
      line(200 + i,250,270 + i,300);
      line(270 + i,300,350 + i,250);
      line(200 + i,250,350 + i,250);
      line(350 + i,300,350 + i,220);
      line(340 + i,210,360 + i,230);
      line(265 + i,280,275 + i, 320);
      line(190 + i,240,220 + i,240);

      line(0,330,650,330);
      delay(30);
      cleardevice();
    }
    getch();
    closegraph();
    return 0;
}