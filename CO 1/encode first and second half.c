#include<stdio.h>
int main()
{
	char x;
	printf("Enter an alphabet");
	scanf("%c", &x);
	if(x<=77 || x<=109)
	{
		printf("%d", x+5);
	}else if(x>=77 || x>=109)
	{
		printf("%d", x-5);
	} else{
		printf("Invalid Input");
	}
}
