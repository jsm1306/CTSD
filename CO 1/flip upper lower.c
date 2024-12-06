#include<stdio.h>
int main()
{
	char x;
	printf("Enter an alphabet");
	scanf("%c", &x);
	if(x>=65 && x<=90)
	{
		printf(" The alphabet is upper case and iTS LOWER CASE IS %c", x+32);
	}else if(x>=97 && x<=122)
	{
		printf("The alphabet is in lower case and iTS upper CASE IS %c", x-32);
	} else
	{
		printf("Invalid");
	}
}
