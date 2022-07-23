#include<stdio.h>
#include<conio.h>
void avinash();
void main()
 {
  clrscr();
  avinash();
  getch();
 }
  void avinash()
  {
   int a;
   int b;
   int scan;
     printf("Enter the value of a:");
     scanf("%d",&a);
     printf("Enter the value of b:");
     scanf("%d",&b);
     printf("\n press 1. for addition \n press 2. for substraction \n press 3. for multiplication \n");
     scanf("%d",&scan);
     switch(scan)
     {
     case 1:
	printf("\n addition:%d",a+b);
     break;

     case 2:
	printf("\n subtraction:%d",a-b);
     break;

     case 3:
	printf("\n multiplication:%d",a*b);
     break;

     default:
	printf("Enter the corect value OR case");
     }
     }


