#include<stdio.h>
#include<conio.h>
float l;float b;float area;
int rectangle();
void main()
{
clrscr();
area=rectangle();
printf("Going to the calculate the area of rectangle");
printf("The area of the square:%f\n",area);
getch();
}
int rectangle()
{
printf("Enter the length of rectangle:");
scanf("%f",&l);
printf("Enter the width of rectangle:");
scanf("%f",&b);
return l*b;
}