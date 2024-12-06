#include<stdio.h>
int main()
{
	int big, small, a, b,r,lcm;
	printf("Enter two number: ");
	scanf("%d %d", &a, &b);
	(a>b)?(big=a,small=b):(big=b,small=a);
	for(r=big%small;r!=0;r=big%small)
	{
		big=small;
		small=r;
	} printf("GCD is %d\n", small);
	lcm=a*b/small;
	printf("LCM is %d", lcm);
}
