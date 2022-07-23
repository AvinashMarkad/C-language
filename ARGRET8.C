#include<stdio.h>
#include<conio.h>
float area;
int square();
void main()
{
clrscr();
printf("Going to the calculation the area of the square\n");
area=square();
printf("The area of square:%f\n",area);
getch();
}
int square()
{
float side;
printf("Enter the length of side in meters:");
scanf("%f",&side);
return side*side;
}