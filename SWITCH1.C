#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c;
clrscr();
printf("enter the value of a and b:");
scanf("%d%d",&a,&b);
printf("enter your choice:");
printf("\n press 1 for add \n press 2 for sub \n press 3 for div \n prss 4 for multiplication");
scanf("\n %d",&c);
switch(c)
{
case 1:
printf("%d",a+b);
break;
case 2:
printf("%d",a-b);
break;
case 3:
printf("%d",a/b);
break;
case 4:
printf("%d",a*b);
break;
default:
printf("plz enter valid number");
}
getch();
}