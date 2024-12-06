#include<stdio.h>
#include<string.h>
int main()
{
	char s1[50],*s2;
	int i, c=0;
	printf("Enter string 1: ");
	scanf("%[^\n]s",s1);
	s2=strrev(s1);
	for(i=0;s1[i]!='\0';i++)
	{
		if(s1[i]!=s2[i])
		{
			c++;
		}
	}
	if(c==0)
	{
	printf("palindrome");
} else 
{
	printf("not palindrome");
}
}
