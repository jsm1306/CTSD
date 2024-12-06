#include<stdio.h>
#include<math.h>
int main()
{
	int i,n,r,rev=0;
	printf("Enter a number: ");
	scanf("%d",&n);
	for(i=n;i>0;i=i/10)
	{
		r=i%10;
		rev=rev*10 +r;
	}
	if(rev==n)
	printf("It is a palindrome number");
	else
	printf("It is not a palindrome number");
}
