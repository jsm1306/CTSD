#include<stdio.h>
int main()
{
	char c;
	printf("Enter an alphabet");
	scanf("%c", &c);
	printf("%c is the quadrant of %c", c+4, c);
}
