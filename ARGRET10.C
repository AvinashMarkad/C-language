#include<stdio.h>
#include<conio.h>
int a;int b;
void sum (int a,int b);
void main()
{
clrscr();
printf("\nGoing to the calculation:");
printf("\nEnter two numbers:");
scanf("%d%d",&a,&b);
sum(a,b);
getch();
}
void sum(int a,int b)
{
printf("\n The sum is:%d",a+b);
}