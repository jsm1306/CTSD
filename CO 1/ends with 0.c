#include<stdio.h>
int main()
{
	int n;
	printf("Enter a number");
	scanf("%d", &n);
	if(n%10==0)
	{
		printf(" %d ends with 0", n);
	}
	else
	{
		printf("%d doesn't end with 0", n);
	}
}
