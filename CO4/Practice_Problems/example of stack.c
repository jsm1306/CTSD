#include<stdio.h>
void accept(int [],int );
 void display(int [],int );
 int binarysearch(int [],int,int,int);
int main()
{
  int n,i,l,x;
  printf("Enter number of students");
  scanf("%d",&n);
  int a[n];
    accept(a,n);
  display(a,n);
  printf("Enter data to search");
   scanf("%d",&x);
  l = binarysearch(a,x,0,n-1);
  if(l==-1)
  {
    printf("Data not found");
  }
  else
  {
    printf("\nData found in %d index",l);
  }
}
  void accept(int a[],int n)
  {
  int i;
  printf("Enter marks for %d students",n);
  for(i=0;i<=n-1;i++)
  {
    scanf("%d",&a[i]);
  }
   }  
   void display(int a[],int n)
  {
  int i;
  printf(" marks for %d students",n);
  for(i=0;i<=n-1;i++)
  {
    printf("\n%d",a[i]);
  }
   }  
 int binarysearch(int a[],int x,int si,int ei)
 {
   int mi;
   
   if(si<=ei)
   {
     mi = (si+ei)/2;
     if(x==a[mi])
     {
       return mi;
     }
     else if(x<a[mi])
            {
              return binarysearch(a,x,si,mi-1);
      }
           else
           {
           return binarysearch(a,x,mi+1,ei);
       }
   }  
   else
   {
    return -1;
   }
}
