#include<stdio.h>
void accept(int a[],int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
}
void display(int a[],int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
}
void selectionsort(int a[],int n)
{
	int min,mindex=0,rindex=0,rounds=1,i;
	while(rounds<n)
	{
		min=a[rindex];
		//mindex=rindex;
		for(i=rindex+1;i<n;i++)
		{
			if(a[i]<min)
			{
				min=a[i];
				mindex=i;
			}
		}
			a[mindex]=a[rindex];
			a[rindex]=min;
			rounds++;
		    rindex++;
	}
}
int main()
{
	int i,n;
	printf("Enter array size: ");
	scanf("%d",&n);
	int a[n];
	printf("Enter elements in the array: ");
	accept(a,n);
	printf("before sorting:\n");
	display(a,n);
	selectionsort(a,n);
	printf("after sorting:\n");
	display(a,n);
}
