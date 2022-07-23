#include<stdio.h>
#include<conio.h>
void main()
{
int m;
int n;
clrscr();
printf("enter the number m:");
scanf("%d",&m);
printf("enter the number n:");
scanf("%d",&n);
if(m>n)
{
printf("your password is correct");
}
else
{
printf("incorrect password");
}
getch();
}