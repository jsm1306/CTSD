#include<stdio.h>
int main()
{
	char s;
	printf("Enter an alphabet");
	scanf("%c", &s);
	while(s<=90)
	{
		printf("\n%c", s);
		s++;
	}
}
