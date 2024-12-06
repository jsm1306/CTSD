#include<stdio.h> 
int  main() 
{ 
 int a,b,i,d; 
 printf("enter the numbers"); 
 scanf("%d",&a); 
 scanf("%d",&b); 
 if(a<b) 
 {d=a/3; 
  (a%3==0)?(i=a):(i=(d*3)+3); 
  while(i<=b) 
  { 
   printf("\n%d",i); 
   i=i+3; 
  } 
 } 
 else 
 { 
  (b%3==0)?(i=b):(i=(d)*3+3); 
  while(i<=a) 
  { 
   printf("\n%d",i); 
   i=i+3; 
  } 
 } 
}
