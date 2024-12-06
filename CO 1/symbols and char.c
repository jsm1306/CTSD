#include<stdio.h>
int main()
{
	char x;
	printf("Enter the character");
	scanf("%c", &x);
	if(x>=65 && x<90)
	{
		printf("%c is an uppercase alphabet", x);
	} else if(x>=97 && x<=122)
	{
		printf("%c is an uppercase alphabet",x);
	} else if(x>=48 && x<=57)
	{
		printf("%c is a number", x);
	}
	else
	{
		printf("%c is a symbol", x);
	}	
}
