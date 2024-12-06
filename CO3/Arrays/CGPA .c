#include<stdio.h>
void accept();
void display();
float average();
int main()
{
	int n;
	printf("Enter array size: ");
	scanf("%d",&n);
	float b[n], avg;
	accept(b,n);
	display(b,n);
	avg=average(b,n);
	printf("\nAverage CGPA = %.2f",avg);
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
} float average(float b[], int n)
{
	float s=0.0,avg;
	int i;
	for(i=0;i<n;i++)
	{
		s=s+b[i];
	} avg=s/n;
	return avg;	
}
