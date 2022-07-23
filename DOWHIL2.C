#include<stdio.h>
#include<conio.h>
void main()
{
int a=0;
int i,b;
clrscr();
printf("enter the number:");
scanf("%d",&i);
do
{
b=a*i;
printf("\n %d",b);
a++;
}
while(a<=10);
getch();
}