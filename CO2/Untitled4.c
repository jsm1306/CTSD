#include<stdio.h> 
int main() 
{ 
 int n,i,s,k; 
 scanf("%d",&n); 
 for(i=1;i<=n;i++) 
 { 
  for(s=1;s<=n-i;s++) 
  { 
   printf("  "); 
  } 
  for(k=1;k<=2*i-1;k++) 
  { 
   printf("* "); 
  } 
  printf("\n"); 
} 
 for(i=2;i<=n;i++) 
 { 
  for(s=2;s<=i;s++) 
  { 
   printf("  "); 
  } 
  for(k=1;k<=2*n-(2*i-1);k++) 
  { 
   printf("* "); 
  } 
  printf("\n"); 
} 
}
