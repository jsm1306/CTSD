#include<stdio.h>
int main()
{
	char name[100];
	printf("Enter your name: ");
	scanf("%s",name);
	printf("Hello %s",name);
	printf("\n%c  %c  %c",name[0],name[3],name[10]);
}
