#include<stdio.h>
#include<conio.h>
int main()
{
auto int a=-28;
static int b=8;
printf("the value of auto variable:%d\n",a);
printf("the value of static variable b:%d\n",b);
if(a!=0)
printf("the sum of static variable and variable:%d\n",(b+a));
return 0;

}