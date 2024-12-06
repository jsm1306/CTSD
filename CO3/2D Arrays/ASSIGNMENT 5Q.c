#include<stdio.h> 
int main() 
{ 
 int m,n,i,j; 
 scanf("%d%d",&m,&n); 
 int a[m][n]; 
 printf("Enter the elements of the matrix="); 
 for(i=0;i<m;i++) 
 { 
  for(j=0;j<n;j++) 
  { 
   scanf("%d",&a[i][j]); 
  } 
 } 
 printf("matrix=\n"); 
  for(i=0;i<m;i++) 
 { 
  for(j=0;j<n;j++) 
  { 
   printf("%d ",a[i][j]); 
  } 
  printf("\n"); 
 } 
    for(i=0;i<m;i++) 
 { 
  for(j=0;j<n;j++) 
  { 
   if(a[i][j]==a[j][i]) 
   { 
    printf("\nSymmetric"); 
   } 
   else 
 { 
  printf("\nNot symmetric"); 
 } 
  }
}
}
