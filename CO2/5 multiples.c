#include<stdio.h>
int main()
{
	int i, n;
	printf("Enter a number: ");
	scanf("%d", &n);
	for(i=5;i<=n;i=i+5)
	{
		printf("%d, ", i);
	}
}
