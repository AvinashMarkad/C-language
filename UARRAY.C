#include<stdio.h>
#include<conio.h>
void main()
{
int a[10];
int i,n;
clrscr();
printf("Enter the size of array:");
scanf("%d",&n);
for(i=0;i<n;i++)
{
printf("Enter the %d numbers:",i);
scanf("\n%d",&a[i]);
}
for(i=0;i<n;i++)
{
printf("\n%d",a[i]);
}

getch();
}