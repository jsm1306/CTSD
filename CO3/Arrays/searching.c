#include<stdio.h>
void bubblesort(int a[],int n)
{
	int i,j,temp;
	for(i=1;i<n;i++)
	{
		for(j=0;j<n-i;j++)
		{
			if(a[j]>a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
}
int main()
{
	int i,n,l;
	printf("Enter array size: ");
	scanf("%d",&n);
	int a[n];
	printf("Enter data to insert: ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}printf("Before sorting: \n");
	for(i=0;i<n;i++)
	{
		printf("\n%d",a[i]);
	}
	bubblesort(a,n);
	printf("After sorting: \n");
	for(i=0;i<n;i++)
	{
		printf("\n%d",a[i]);
	}
}
