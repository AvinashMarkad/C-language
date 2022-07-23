#include<stdio.h>
#include<conio.h>
void main()
{
int m;
clrscr();
printf("enter the mark:");
scanf("%d",&m);
if(m>=80&&m<=100)
{
printf("1st class distention");
}
else if(m>=70&&m<=80)
{
printf("1st class");
}
else if(m>=55&&m<=70)
{
printf("2nd class");
}
else if(m>=35&&m<=55)
{
printf("you are passed");
}
else
{
printf("Sorry you are failed");
}
getch();
}
