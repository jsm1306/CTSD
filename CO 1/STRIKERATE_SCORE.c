#include <stdio.h>
int main()
{int x,y,z,i,j,totalscore,b;
float strikerate,temp;
  printf("enter 6s,4s,3s,2s,1s");
  scanf("%d",&x);
  scanf("%d",&y);
  scanf("%d",&z);
  scanf("%d",&i);
  scanf("%d",&j);
  totalscore=x*6+y*4+z*3+i*2+j;
  printf("Enter number of balls faced");
  scanf("%d",&b);
  printf("total score of raj=%d",totalscore);
  temp = (float)totalscore/b;
  printf("Average = %f",temp);
  strikerate = temp*100.0;
  printf("\nStrike rate = %f",strikerate);
}
