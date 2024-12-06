#include<stdio.h>
void accept();
void display(float b[], int);
float maximum(float b[], int);
int main()
{
	int n;
	printf("Enter array size: ");
	scanf("%d",&n);
	float b[n], max;
	accept(b,n);
	display(b,n);
	max=maximum(b,n);
	printf("\nMaximum of CGPA = %.2f",max);
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
		printf("\n %.2f",b[i]);
	}
} float maximum(float b[], int n)
{
	float max;
	int i;
	max = b[0];
	for(i=1;i<n;i++)
	{
		if(b[i]>max)
		{
			max=b[i];
		}
	}
	return max;	
}
