#include<stdio.h>
#include<conio.h>
int main()
{
auto int number=5;
{
auto int number=20;
printf("inner number:%d",number);
return 0;
}
}