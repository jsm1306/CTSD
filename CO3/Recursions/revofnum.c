#include <stdio.h>
int sum=0,rem;
int revNumFunc(int num){
   if(num){
      rem=num%10;
      sum=sum*10+rem;
      revNumFunc(num/10);
   }
   else
      return sum;
}

int main(){
   int num = 1357 ,revNum;
   revNum=revNumFunc(num);
   printf("The number after reversing is :%d",revNum);
   return 0;
}
