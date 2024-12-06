#include<stdio.h>
void accept(float [], int);
void display(float [], int);
float minimum(float [], int);
int main()
{
	int n;
	printf("Enter array size: ");
	scanf("%d",&n);
	float b[n], min;
	accept(b,n);
	display(b,n);
	min=minimum(b,n);
	printf("\nMinimum of CGPA = %.2f",min);
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
} float minimum(float b[], int n)
{
	float min;
	int i;
	min = b[0];
	for(i=1;i<n;i++)
	{
		if(b[i]<min)
		{
			min=b[i];
		}
	}
	return min;	
}
