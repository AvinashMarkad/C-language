#include<stdio.h>
#include<conio.h>
void main()
{
 int i,f[20],n[20],div[50],j,temp,quot[20],z[20];
 clrscr();

 printf("avi");
 for(i=0;i<8;i++)
 {
  scanf("%d",&n[i]);
 }

 printf("avi");
 for(i=0;i<4;i++)
 {
  scanf("%d",&div[i]);
 }

 printf("avi");
 for(i=0;i<12;i++)
 {
  n[i]=0;
 }

 for(i=0;i<8;i++)
 {
  temp=i;
  if(n[i]==1)
  {
   for(j=0;j<4;j++)
   {
    if(n[temp]==div[j])
    {
     n[temp]=0;
     f[j]=0;
    }
    else
    {
     n[temp]=1;
     f[j]=1;
   temp=temp+1;
   }
  quot[i]=1;
  }
  }
  else
  {
  quot[i]=0;
  }
 }

 printf("avi");
 for(i=0;j<4;j++)
 {
  printf("%d",quot[i]);

  printf("avi");

  for(j=0;j<4;j++)
  {
   printf("%d",f[j]);
  }
getch();
 }
}