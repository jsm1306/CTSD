#include<stdio.h>
int main()
{
	int n, x;
	printf("Enter the number of apples and beggars");
	scanf("%d %d", &n , &x);
	if(n%x==0)
	{
		printf("he can equally distribute apples");
	}
	else
	{
		printf("he cannot equally distribute apples");
	}
}

