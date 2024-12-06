//Write a c program to find the maximum element and minimum element in each row.  
#include<stdio.h> 
int main() 
{ 
 int m,n,i,j,mx,mn; 
 printf("Enter the no of rows and columns:"); 
 scanf("%d %d",&m,&n); 
 printf("Enter the data"); 
 int a[m][n]; 
 for(i=0;i<m;i++) 
 { 
  for(j=0;j<n;j++) 
  { 
   scanf("%d",&a[i][j]); 
  } 
 } 
 for(i=0;i<m;i++) 
 { 
  mx=a[i][0]; 
  for(j=0;j<n;j++) 
  { 
   if(a[i][j]>mx) 
   { 
    mx=a[i][j]; 
   } 
  } 
  printf("max of %d row is %d\n",i+1,mx); 
 } 
  mn=a[i][0]; 
  for(j=0;j<n;j++) 
  { 
   if(a[i][j]<mn) 
   { 
    mn=a[i][j]; 
   } 
  } 
   printf("min of %d row is %d\n",i+1,mn); 
 } 
}
