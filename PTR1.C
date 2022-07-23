#include<stdio.h>
#include<conio.h>
int a;
int b;
int c;
int d;

int *x=&a;
int *y=&b;

void avi();
void main()
{
clrscr();
avi();
getch();
}
void avi()
{

printf("Enter the value of a:");
scanf("%d",&a);
printf("Enter the value of b:");
scanf("%d",&b);

printf("Press 1.for add\nPress 2.for sub\nPress 3.for multiplication\nPress 4.for div\n
");
scanf("%d",&c);
switch(c)
{
case 1:
d=*x + *y;
printf("%d",d);
break;

case 2:
d=*x - *y;
printf("%d",d);
break;
case 3:
d=*x * *y;
printf("%d",d);
break;
case 4:
d=*x / *y;
printf("%d",d);
break;
}
}
