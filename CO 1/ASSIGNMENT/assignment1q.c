#include<stdio.h>
int main()
{
	int x, r;
	printf("Enter the 4 digit number");
	scanf("%d", &x);
	r=x/10;
	if(x%1000==555 || r%555==0)
	{
		printf("YES");
	}
	else
	{
		printf("NO");
	}
}
