#include<stdio.h>
#include<conio.h>
void avi();
void main()
{
clrscr();
avi();

getch();
}
void avi()
{

int a;
int b;
printf("enter the value of a:",&a);
scanf("%d",&a);
printf("enter the value of b:",&b);
scanf("%d",&b);

printf("%d",a*b);
}
