#include<stdio.h>
int main()
{
	int n, n1, n2, n3,n4;
	printf("Enter n value");
	scanf("%d", &n);
	n1=0;
	n2=1;
	n3=2;
	printf("\n%d\n%d\n%d", n1, n2,n3);
	for(n3=n1+n2; n3<=n; n3=n1+n2)
	{
		n4=n1+n2+n3;
		printf("\n%d", n4);
		n1=n2;
		n2=n3;
		n3=n4;
	}
}
