#include<stdio.h>
#include<conio.h>
struct stud
{
int roll_no;
char name[20];
float marks;
};
void main()
{
int i;
struct stud st[2];
printf("Enter two records:");
for(i=0;i<2;i++)
{
printf("\nEnter Roll No:");
scanf("%d",&st[i].roll_no);

printf("\nEnter your name:");
scanf("%s",&st[i].name);

printf("\nEnter marks:");
scanf("%d",&st[i].marks);
}
printf("\nStudents Records:");

for(i=0;i<2;i++)

printf("Roll No:%d\nName:%s\nMarks:%f",st[i].roll_no,st[i].name,st[i].marks);

getch();
}