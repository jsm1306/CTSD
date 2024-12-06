// C program to reverse the string in C using loops 
#include <stdio.h> 
#include <string.h> 
int main() 
{ 
	char str[100];
	int i,j,len;
	printf("Enter string 1: ");
	scanf(" %[^\n]s",str); 
	printf("Original String: %s\n", str); 
	len = strlen(str); 
	for ( i = 0, j = len - 1; i <= j; i++, j--) { 
		char c = str[i]; 
		str[i] = str[j]; 
		str[j] = c; 
	} 
	printf("Reversed String: %s", str); 
}

