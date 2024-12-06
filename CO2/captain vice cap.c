#include<stdio.h>
int main()
{
	int n;
	printf("enter number of players");
	scanf("%d", &n);
	printf("number of ways of selcting captain and vice captain = %d", (n(n-1))/2);
}
