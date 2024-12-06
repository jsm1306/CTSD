#include<stdio.h>
int main()
{
	char a[100];
	int i;
	printf("Enter your name: ");
	scanf("%[^\n]s",a);
	for(i=0;a[i]!='\0';i++)
	{
		printf("%c\n",a[i]);
	}
}
