#include<stdio.h>
#include<string.h>
int main()
{
	char a[100];
	int l;
	printf("Enter a name: ");
	scanf("%[^\n]s",a);
	printf("Your name is %s",a);
	l=strlen(a);
	if(l%2==0)
	{
		printf("\nBeautiful");
	}
	else
	{
		printf("\nFabulous");
	}
}
