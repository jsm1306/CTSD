#include<stdio.h> 
int main() 
{ 
 char a,b; 
 printf("enter a alphabet"); 
 scanf("%c",&a); 
 if(a>=65 && a<=90) 
 { 
 b=a+32; 
 printf("\nbefore flip = %c",a); 
 printf("\nafter flip = %c",b);  
 } 
 else if(a>=97 && a<=122) 
 { 
 b=a-32; 
 printf("\nbefore flip = %c",a); 
 printf("\nafter flip = %c",b);  
 } 
  
}
