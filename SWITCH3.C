#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c;
clrscr();
printf("plz enter you'r choice:");
printf("\n press 1 to even number\n press 2 odd number");
scanf("%d",&c);
switch(c)
{
case 1:
for(a=0;a<=50;a++)
{
if(a%2==0)
printf("\n%d",a);

}
break;
case 2:
for(b=0;b<=50;b++)
{
if(b%2!=0)
printf("\n%d",b);
}
break;

default:
printf("enter the correct number:");
}
getch();
}
