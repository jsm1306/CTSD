#include <stdio.h>

int main(void) {
  // your code goes here
int n,i,a,b,j,k,c,min;
scanf("%d",&n);
for(i=1;i<=n;i++)
{
    scanf("%d%d",&a,&b);
    int d[a],e[a];
    for(j=0,k=0,c=0;j<a;j++)
    {
        scanf("%d",&d[j]);
        if(d[j]/b>=1)
        {
            c++;
            e[k]=d[j];
            k++;
        }
    }
    if(c>0)
    {
    min=e[0]%b;
    for(j=0;j<c;j++)
    {
       if(min>e[j]%b)
       {
          min=e[j]%b; 
       }
    }
    printf("%d\n",min);
    }
    else
    {
        printf("-1\n");
    }
}
}
