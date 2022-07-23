#include<stdio.h>
#include<conio.h>
void sum();
void main()
{
clrscr();
printf("\n Going to calculate the sum of two numbers:");
sum();
getch();
}
void sum()
{
int a,b;
printf("\n Enter two numbers:");
scanf("%d%d",&a,&b);
printf("The sum is %d",a+b);
}
