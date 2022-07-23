#include<stdio.h>
#include<conio.h>
void sum();
void main()
{
clrscr();
printf("Go to Calculation");
sum();
getch();
}
void sum()
{
int a,b;
       printf("\nEnter the two numbers:");
       scanf("%d%d",&a,&b);
       printf("\nSum of this two numbers:%d",a+b);
       }