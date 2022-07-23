#include<stdio.h>
#include<conio.h>
int a,b,c,d,e;
void average(int a,int b,int c,int d,int e);
void main()
{
clrscr();
printf("\n Going to the caclculation of average of five numbers:");
printf("\n Enter the five numbers:");
scanf("\n%d \n%d \n%d \n%d \n%d",&a,&b,&c,&d,&e);
average(a,b,c,d,e);
getch();
}
void average(int a,int b,int c,int d,int e)
{
float avg;
avg=(a+b+c+d+e)/5;
printf("The average of five numbers:%f",avg);
}