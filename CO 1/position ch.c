#include<stdio.h>
int main()
{
	char x;
	printf("Enter an alphabet");
	scanf("%c", &x);
	if(x>=65 && x<=90)
	{
		printf(" The alphabet is upper case and its value is %d", x-64);
	}else if(x>=97 && x<=122)
	{
		printf("The alphabet is lower case and its value is %d", x-96);
	} else
	{
		printf("Invalid");
	}
}
