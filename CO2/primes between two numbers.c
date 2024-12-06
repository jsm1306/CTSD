#include<stdio.h>
int main()
{
	int a, b, n, small, big, i,c;
	printf("Enter the range(Enter two numbers): \n");
	scanf("%d %d", &a, &b);
	(a<b)?(small=a,big=b):(small=b,big=a);
	for(n=small;n<=big;n++)
	{
		for(i=2;i<=n/2;i++)
		{
			if(n%i==0)
			{
				break;
			}
		}
		if(!(i<=n/2))
		{
			printf("%d, ",n);
		}
	} 
}
