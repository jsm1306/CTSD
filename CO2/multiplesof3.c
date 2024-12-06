#include<stdio.h>
int main()
{
	int a, b, i, r;
	printf("Enter 2 numbers");
	scanf("%d%d", &a, &b);
	if(a<b)
	{ r=a/3;
	  (a%3==0)?(i=a):(i=(r)*3+3);
	{	
	while(i<=b)
	{
		printf("\n%d",i);
		i=i+3;
	}
}
	}else
	{r=b/3;
	(b%3==0)?(i=b):(i=(r)*3+3);
	while(i<=a)
	{
		printf("\n%d",i);
		i=i+3;
	}
	}
}
