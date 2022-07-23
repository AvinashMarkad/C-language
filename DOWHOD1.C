#include<stdio.h>
#include<conio.h>
void main()
{
int a=0;
clrscr();
do
{
  if(a%2!=0)
  {
  printf("\n%d",a);
  }
  a++;
}
while(a<=50);
getch();
}