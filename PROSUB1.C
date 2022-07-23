#include<stdio.h>
#include<conio.h>
void main()
{
int number1,number2,sub;
printf("enter the first number:");
if(scanf("%d",&number1)==1)
{
printf("enter the second number:");
if(scanf("%d",&number2)==1)
{
sub=number1-number2;
printf("the substraction is :%d",sub);
}
else
{
printf("error,enter coeerct value");
}
}
else
{
printf("error,enter correct value");
getch();
}
}