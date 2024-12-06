#include<stdio.h>
#include<string.h>
int main()
{
	int i,j,l;
	char a[50];
	printf("Enter a string word: ");
	scanf("%[^\n]s",a);
	l=strlen(a);
	for(i=0,j=l-1;i<=j;i++,j--)
	{
		if(a[i]!=a[j])
		
		{
			break;
		}
	}
	if(i<=j)
	{
		printf("%s is not a palindrome",a);
	} else
	{
		printf("%s is a palindrome",a);
	}
}
