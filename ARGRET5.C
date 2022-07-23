#include<stdio.h>
#include<conio.h>
int a;int b;int c;
int avi(int a,int b);
void main()
{
clrscr();
c=avi(a,b);
printf("\n addition of a & b:%d",c);
getch();
}
int avi(int a,int b)
{
printf("Enter the value of a:");
scanf("%d",&a);
printf("Enter the value of b:");
scanf("%d",&b);
return(a+b);
}