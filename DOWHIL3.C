#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c,d;
clrscr();
printf("enter the number:");
scanf("%d",&a);
do
{
b=a*a;
printf("\n %d",b);
a++;
}
while(a<=20);
getch();
}