#include<stdio.h>
int main()
{
	int n,sum, i;
	sum=0;
	printf("Enter a number");
	scanf("%d", &n);
	i=1;
	while(i<=n)
	{
		sum+=i*i;
		i++;
	}
	printf("\n The sum of squares of first %d natural numbers is %d", n, sum);
}
