#include<stdio.h>
#include<conio.h>
void main()
{
int a;
clrscr();
printf("enter the value of a:");
scanf("%d",&a);
if(a%2==0)
{
printf("given number is even");
}
else
{
printf("given number is odd");
}
getch();
}