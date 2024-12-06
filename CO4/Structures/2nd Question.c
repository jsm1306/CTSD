#include<stdio.h> 
struct student 
{ 
  char name[100]; 
  int clas; 
  int no; 
  int submarks; 
  int total; 
}; 
int main() 
{ 
  int n,i; 
  printf("Enter number of students="); 
  scanf("%d",&n); 
  struct student s[n]; 
  printf("\nEnter the student name,class,roll number,subject marks,total marks"); 
  for(i=0;i<n;i++) 
  { 
   printf("Enter the details of student-%d",i+1); 
   scanf(" %[^\n]s",&s[i].name); 
   scanf(" %d",&s[i].clas); 
   scanf(" %d",&s[i].no); 
   scanf(" %d",&s[i].submarks); 
   scanf(" %d",&s[i].total); 
  } 
  for(i=0;i<n;i++) 
  { 
   printf("Details of Student-%d\n",i+1); 
   printf("Student Name=%s\nStudent class=%d\nStudent roll number=%d\nSubject marks=%d\nTotal marks=%d\n",s[i].name,s[i].clas,s[i].no,s[i].submarks,s[i].total); 
  } 
   
}
