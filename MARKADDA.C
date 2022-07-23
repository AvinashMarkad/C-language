#include<stdio.h>
#include<conio.h>
void main()
{
int sem1,sem2,c,d;
float e;
clrscr();
printf("enter the sem 1 mark:");
scanf("%d",&sem1);
printf("enter the sem 2 mark:");
scanf("%d",&sem2);
printf("enter your choice");
printf("\n addition of mark pres 1 \n average of mark press 2");
scanf("%d",&c);
switch(c)
{
case 1:
d=sem1+sem2;
printf("%d",d);
break;
case 2:
e=sem1+sem2%2;
printf("%f",e);

break;

default:
printf("enter correct number");
}
getch();
}