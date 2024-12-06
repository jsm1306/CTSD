#include<stdio.h>
void sort(int a[],int n)
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
				a[j+1]=a[j];
			}
		}
	}
}
int main()
{
	int i,n;
	printf("Enter array size: ");
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Before Swaping: ");
	for(i=0;i<n;i++)
	{
		printf("%d\n",a[i]);
	}printf("After Swaping: ");
	sort(a,n);
	for(i=0;i<n;i++)
	{
		printf("%d\n",a[i]);
	}
}
