//Write a c program to find the maximum element and minimum element from entire matrix. 
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
 printf("matrix is\n"); 
  for(i=0;i<m;i++) 
 { 
  for(j=0;j<n;j++) 
  { 
   printf("%d ",a[i][j]); 
  } 
  printf("\n"); 
 } 
 mx=a[0][0]; 
 for(i=0;i<m;i++) 
 { 
  for(j=0;j<n;j++) 
  { 
   if(a[i][j]>mx) 
   { 
    mx=a[i][j]; 
   } 
  } 
 } 
 printf("Maximum of array element is %d\n",mx); 
 mn=a[0][0]; 
 for(i=0;i<m;i++) 
 { 
  for(j=0;j<n;j++) 
  { 
   if(a[i][j]<mn) 
   { 
    mn=a[i][j]; 
   } 
  } 
 } 
 printf("Minimum of array element is %d",mn); 
}
