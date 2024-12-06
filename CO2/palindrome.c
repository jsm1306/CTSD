#include<stdio.h>
int main()
{
	int i, n, rev,r;
	printf("Enter a number");
	scanf("%d", &n);
	for(rev=0,i=n;i>0;i=i/10)
	{
		r=i%10;
		rev=rev*10+r;
	}
	printf("%d\n", rev);
	if(n==rev)
	{
		printf("It is a palindrome number");
	} else
	{
		printf("It is not a palindrome number");
	}
}
