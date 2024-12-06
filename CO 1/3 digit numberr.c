#include<stdio.h>
int main()
{
	int x, y, z, n, sum, third;
	printf("Enter the number");
	scanf("%d", &n);
	x= (n%10);
	y= (x/10);
	z= (y/10);
	sum = x+ y;
	third = (z%10);
	if(sum < third)
	{
		printf("It is proper");
	}
	else{
		printf("It is not proper");
	}
}
