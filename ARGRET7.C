#include<stdio.h>
#include<conio.h>
int sum();
void main()
{

int result;
clrscr();
printf("\n Going to calculate the sum of two numbers:");
result=sum();
printf("%d",result);
getch();
}
int sum()
{
int a,b;
printf("\nEnter two numbers:");
scanf("%d%d",&a,&b);
return a+b;
}
