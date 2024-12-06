#include<stdio.h>
int main()
{
	char a;
	printf("Enter a letter: ");
	scanf("%c",&a);
	if(a>='A' && a<='Z')
	printf("%c",a+32);
	else
	printf("%c",a-32);
}
