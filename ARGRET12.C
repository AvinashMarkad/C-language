#include<stdio.h>
#include<conio.h>
int a;int b;int result;
int sum(int a,int b);
void main()
{
clrscr();
printf("\n Going to calculate the sum of two number:");
printf("\n Enter two numbers:");
scanf("%d%d",&a,&b);
result=sum(a,b);
printf("\n The sum is:%d",result);
getch();
}
int sum(int a,int b)
{
return a+b;
}
