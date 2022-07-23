#include<stdio.h>
#include<conio.h>
struct student
{
int roll_no;
char name[12];
int sem;
float marks;
}s;
void main()
{
clrscr();
printf("Enter Your roll_no:");
scanf("%d",&s.roll_no);
printf("Enter Your semister no:");
scanf("%d",&s.sem);
printf("Enter Your name:");
scanf("%s",s.name);
printf("Enter Your marks:");
scanf("%f",&s.marks);

printf("Student Data:");
printf("\n%d\n%d\n%s\n%f",s.roll_no,s.sem,s.name,s.marks);
getch();
}