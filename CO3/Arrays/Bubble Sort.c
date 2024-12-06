#include<stdio.h>
void bubblesort(int a[], int n)
{
	int i,j,x;
	for(i=1;i<=n-1;i++)
	{
		for(j=0;j<n-i;j++)
		{
			if(a[j]>a[j+1])
			{
				x=a[j];
				a[j]=a[j+1];
				a[j+1]=x;
			}
		}
	}
}
int main()
{
	int i, n;
	printf("Enter array size: ");
	scanf("%d",&n);
	int a[n];
	printf("\nEnter data: ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Before Sorting: ");
	for(i=0;i<n;i++)
	{
		printf("\n%d",a[i]);
	} bubblesort(a,n);
	printf("\nAfter Sorting: ");
	for(i=0;i<n;i++)
	{
		printf("\n%d",a[i]);
	}
}
