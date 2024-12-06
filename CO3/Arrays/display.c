#include<stdio.h>
void accept(int a[],int n)
{
	int i;
	printf("Enter data for array: ");
	for(i=0;i<n;i++)
	{
	scanf("%d",&a[i]);
	}
}
void display(int a[],int n)
{
	int i;
	printf("Array data is: ");
	for(i=0;i<n;i++)
	{
	printf("\n%d",a[i]);
	}
}
int main()
{
	int n,s,i;
	printf("Enter array size of 1st array: ");
	scanf("%d",&n);
	int a[n];
	accept(a,n);
	display(a,n);
	printf("Enter array size of 2nd array: ");
	scanf("%d",&s);
	int b[s];
	accept(b,s);
	display(b,s);
}
