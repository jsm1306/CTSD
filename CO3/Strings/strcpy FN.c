#include<stdio.h>
#include<string.h>
int main()
{
	char s1[50];
	printf("Enter string 1: ");
	scanf(" %[^\n]s",s1);
	printf("After reversing is %s",strrev(s1));
}
