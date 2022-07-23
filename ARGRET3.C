#include<stdio.h>
#include<conio.h>
int a=5;int b=10;
void add(int a,int b);
void main()
{
clrscr();
add(a,b);
getch();
}
void add(int a,int b)
{
printf("%d",a+b);
}