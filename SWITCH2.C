#include<stdio.h>
#include<conio.h>
void main()
{
int a;
clrscr();

printf("enter the value of a:");
scanf("%d",&a);
switch(a)
{
case 1:
printf("case no 1");
break;

case 2:
printf("case 2");
break;

case 3:
printf("case 3");
break;
default:
printf("plz enter the correct number");
}
getch();
}