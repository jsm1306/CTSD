#include<stdio.h>
int main()
{
	int x,y;
	printf("Enter the runs scored");
	scanf("%d%d", &x, &y);
	if(x>y)
	{
		printf("Ravi scored maximum runs in 1st match");
	}
	else
	{
		printf("Ravi scored maximum runs in 2nd match");
	}
}
