#include<stdio.h>
int main()
{
	int n, n1, n2, n3,i;
	printf("Enter a number: ");
	scanf("%d", &n);
	n1=0; n2=1;
	printf("%d\n%d\n",n1,n2);
	for(i=3;i<=n;i++)
	{
		n3=n1+n2;
		printf("%d\n",n3);
		n1=n2;
		n2=n3;
	}
}
