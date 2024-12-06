#include<stdio.h>
int main()
{
	int a,b,big,small,r,lcm;
	printf("Enter two numbers: ");
	scanf("%d %d",&a,&b);
	(a>b)?(big=a,small=b):(big=b,small=a);
	for(r=big%small;r!=0;r=big%small)
	{
		big=small;
		small=r;
	}printf("GCD is %d",small);
	lcm=a*b/small;
	printf("\n%d is the LCM",lcm);
}
