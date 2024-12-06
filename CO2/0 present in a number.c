#include<stdio.h>
int main()
{
	int r,i,n;
	printf("Enter a number: ");
	scanf("%d", &n);
	for(i=n;i>0;i/=10)
	{

		if(i%10==0)
		{ 
		break;
	}
}
if(i>0)
{
		printf("YES");
	} else{
		printf("NO");
	}
	}
