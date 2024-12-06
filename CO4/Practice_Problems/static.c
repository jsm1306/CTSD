#include<stdio.h>
int main()
{
  int n,c;
  printf("enter a number");
  scanf("%d",&n);
  c = count(n);
  printf("Number of digits = %d",c);
}
int count(int n)
{
static int c =0;
  if(n>0)
  {
    c++;
    count(n/10);
  }
  else
  {
    return c;
  }
}
