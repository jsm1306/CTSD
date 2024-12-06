#include<stdio.h>
int main()
{
	char c;
	printf("Enter an Alphabet");
	scanf("%c", &c);
	printf("%c ASCII value is %d", c,c);
	printf("\nThe equivalent lower case is %d", c+32);
}

