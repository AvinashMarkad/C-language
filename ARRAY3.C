#include<stdio.h>
#include<conio.h>
void main()
{
int i,j;
int ary[2][2]={{3,1},{5,7}};
clrscr();
for(i=0;i<=1;i++)
{
 for(j=0;j<=1;j++)
 {
  printf("\t%d",ary[i][j]);
  }
  printf("\n\n");
  }
getch();
}

