#include<stdio.h>
int main()
{
	char x;
	printf("Enter an alphabet");
	scanf("%c", &x);
	if(x%2==0)
	{
		printf("It is humble");
	} else {
		printf("It is not humble");
	}
}
