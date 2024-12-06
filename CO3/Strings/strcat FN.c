#include<stdio.h>
#include<string.h>
int main()
{
	char s1[50],s2[50];
	printf("Enter string 1: ");
	scanf("%[^\n]s",s1);
	printf("Enter string 2: ");
	scanf(" %[^\n]s",s2);
	strcat(s1,s2);
	printf("\nhello %s",s1);
}
