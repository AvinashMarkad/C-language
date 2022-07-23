#include<stdio.h>
#include<conio.h>
int a=5;int b=10;int c;
int avi(int a,int b);
void main()
{
clrscr();

c=avi(a,b);
printf("%d",c);
getch();
}
int avi(int a,int b)
{
return(a*b);
}
