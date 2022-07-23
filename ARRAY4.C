#include<stdio.h>
#include<conio.h>
void main()
{
int i,j;
int a[2][2];
clrscr();
a[0][0]=5;
a[0][1]=7;
a[1][0]=3;
a[1][1]=9;
for(i=0;i<=1;i++)
{
 for(j=0;j<=1;j++)
 {
  printf("%d",a[i][j]);
  }
  printf("\n");
  }
getch();
}