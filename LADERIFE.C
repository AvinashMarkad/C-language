#include<stdio.h>
#include<conio.h>
void main()
{
int m;
clrscr();
printf("enter the number ofunder the therty m:");
scanf("%d",&m);
if(m>0 && m<10)
{
printf("number is in under ten rang");
}
else if(m>10 && m<20)
{
printf("number is in under twenty range");
}
else if(m>20 && m<30)
{
printf("number is in under therty rang");
}
else
{
printf("number is  not valid");
}
getch();
}