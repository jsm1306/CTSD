#include<stdio.h>
int main()
{
	int i, n, r, rev;
	printf("Enter a number: ");
	scanf("%d", &n);
	for(rev=0,i=n;i>0;i=i/10)
	{
		r=i%10;
		rev=rev*10+r;
	} if(rev==n)
	{
		printf("%d is a palindrome number", n);
	} else
	{
		printf("%d is not a palindrome number", n);
	}
}
