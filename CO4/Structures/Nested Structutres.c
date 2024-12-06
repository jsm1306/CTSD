#include<stdio.h>
#include<string.h>
struct date
{
  int day;
  int month;
  int year;
};
struct emp
{
  int eid;
  char ename[20];
  struct date dob;
  float sal;
};
int main()
{
  struct emp e1;
  e1.eid=101;
  strcpy(e1.ename,"sindhu");
  e1.dob.day=13;
  e1.dob.month=6;
  e1.dob.year=2006;
  e1.sal=10000000;
  printf("emp id is %d ename is %s emp date %d|%d|%d emp salary is %.2f",e1.eid,e1.ename,e1.dob.day,e1.dob.month,e1.dob.year,e1.sal);
}
