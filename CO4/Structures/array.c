#include<stdio.h> 
 struct student 
 { 
  char student_name[40]; 
  int clas; 
  long long int roll_number; 
  int subject_marks; 
  int total_marks; 
 }; 
 int main() 
 { 
  int n,i; 
  printf("Enter the number of students="); 
  scanf("%d",&n); 
  struct student Stu_list[n]; 
  printf("\nEnter the student name,class,roll number,subject marks,total marks"); 
  for(i=0;i<n;i++) 
  { 
   printf("Enter the details of student-%d",i+1); 
   scanf(" %[^\n]s",&Stu_list[i].student_name); 
   scanf("%d",&Stu_list[i].clas); 
   scanf("%lld",&Stu_list[i].roll_number); 
   scanf("%d",&Stu_list[i].subject_marks); 
   scanf("%d",&Stu_list[i].total_marks); 
  } 
  for(i=0;i<n;i++) 
  { 
   printf("Details of Student-%d\n",i+1); 
   printf("Student Name=%s\nStudent class=%d\nStudent roll number=%lld\nSubject marks=%d\nTotal marks=%d\n",Stu_list[i].student_name,Stu_list[i].clas,Stu_list[i].roll_number,Stu_list[i].subject_marks,Stu_list[i].total_marks); 
  } 
   
 }
