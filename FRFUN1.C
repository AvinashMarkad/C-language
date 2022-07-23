#include<stdio.h>
#include<conio.h>
void avim();
void main()
{
clrscr();
avim();
getch();
}
void avim()
{
int x,y,z,a;
printf("\n [1].press for odd and even number:\n [2].press for table:\n[3].for upto 50 even number:\n");
scanf("%d",&a);
switch(a)
{
case 1:
{

printf("enter the number:");
scanf("%d",&x);
if(x%2==0)
{
printf("%d is even number",x);
}
else if(x%2!=0)
{
printf("%d is odd number",x);
}
else
{
printf("wrong value");
}
}
break;
case 2:
{
printf("enter the number for table:");
scanf("%d",&x);
for(y=1;y<=10;y++)
{
printf("\n%d",y*x);

}
break;
case 3:
{
for(z=0;z<=50;z++)
{
if(z%2==0)
{
printf("\n%d",z);
}
}
}
}
}
getch();
}
