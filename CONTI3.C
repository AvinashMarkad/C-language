#include<stdio.h>
#include<conio.h>
void main()
{
int i=0;
clrscr();
for(i=0;i<=10;i++)
{
if(i==6)
{
continue;
}
printf("\n%d",i);
}
getch();
}

