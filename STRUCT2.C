#include<stdio.h>
#include<conio.h>
struct emp
{
int sr_no;
int dept_no;
int emp_id;
char dept_name[20];
char emp_name[20];
int salary;
}e;

void main()
{

clrscr();

printf("Enter Sr.No:");
scanf("%d",&e.sr_no);

printf("Enter Dept. No:");
scanf("%d",&e.dept_no);

printf("Enter Emp. Id:");
scanf("%d",&e.emp_id);

printf("Enter Dept. Name:");
scanf("%s",e.dept_name);

printf("Enter Emp. Name:");
scanf("%s",e.emp_name);

printf("Enter Salary:");
scanf("%d",&e.salary);

clrscr();

printf("Sr.No:%d\nDept.Name:%d\nEmp.Id:%d\nDept.Name:%s\nEmp.Name:%s\nEmp.Salary:%d",e.sr_no,e.dept_no,e.emp_id,e.dept_name,e.emp_name,e.salary);

getch();
}
