#include<stdio.h>
int main()
{
	int i, n, l;
	printf("Enter a number: ");
	scanf("%d", &n);
	for(i=n;i>0;i=i/10)
	{
		l=i%10;
	}
	printf("The most significant digit is %d", l);
}
