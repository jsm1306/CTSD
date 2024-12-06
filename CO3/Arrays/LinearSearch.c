#include<stdio.h>
void accept(float b[], int n);
void display(float b[], int n);
int linearsearch(float b[], int n);
int main()
{
	int n,l;
	printf("Enter array size: ");
	scanf("%d",&n);
	float b[n];
	accept(b,n);
	display(b,n);
	l=linearsearch(b,n);
	if(l==-1)
	{
	printf("Data not found");
}
	else
	{
		printf("\nData is found in %d array index",l);
	}
} void accept(float b[], int n)
{
	int i;
	printf("Enter CGPA for %d students",n);
	for(i=0;i<n;i++)
	{
		scanf("%f",&b[i]);
	}
}
void display(float b[], int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		printf("\n%.2f",b[i]);
	}
}
int linearsearch(float b[], int n)
{
	int i;
	float x;
	printf("\nEnter data to search: ");
	scanf("%f",&x);
	for(i=0;i<n;i++)
	{
		if(x==b[i])
		{
			return i;
		}
	}
	return -1;	
}
