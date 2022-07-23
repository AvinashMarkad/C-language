#include<stdio.h>
#include<conio.h>
void test();
void main()
{
int a=10,b=20;
printf("\nvalue:a=%d and b=%d",a,b);
test();
}
void test()
{
int x=30,y=40;
printf("\nvalue:x=%d and y=%d",x,y);
getch();
}