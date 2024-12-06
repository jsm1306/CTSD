#include<stdio.h>
float average(int s,int b,int n)
{
	float x;
	x=(float)(s+b+n)/3;
	return x;
}
int main()
{
	float x;
	int s,b,n;
	printf("Enter 3 numbers: ");
	scanf("%d %d %d", &s, &b, &n);
	x=average(s,b,n);
	printf("Average= %.2f",x);
}
