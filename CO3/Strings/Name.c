#include<stdio.h>
int main()
{
	char v[30];
	int i;
	printf("Enter your name: ");
	scanf(" %[^\n]s",v);
	printf("%s",v);
}
