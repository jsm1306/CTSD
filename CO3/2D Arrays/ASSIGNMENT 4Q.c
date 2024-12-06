//Write a c program to find the maximum element and minimum element in each column.  
#include<stdio.h> 
int main() 
{ 
 int m,n,i,j,mx,mn; 
 printf("Enter no of rows and columns:"); 
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
 for(i=0;i<n;i++) 
 { 
  mx=a[0][i]; 
  for(j=0;j<m;j++) 
  { 
   if(a[j][i]>mx) 
   { 
    mx=a[j][i]; 
   } 
  } 
   printf("max of %d column is %d\n",i+1,mx); 
  mn=a[0][i]; 
  for(j=0;j<n;j++) 
  { 
   if(a[j][i]<mn) 
   { 
    mn=a[j][i]; 
   } 
  } 
   printf("min of %d row is %d\n",i+1,mn); 
 } 
  
}
