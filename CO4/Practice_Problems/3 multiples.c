#include<stdio.h>
int main()
{
	int i,a,b;
	printf("Enter 2 numbers: ");
	scanf("%d %d",&a,&b);
	i=a;
	while(i<=b)
	{
		if(i%3==0)
		{
			printf("%d\n",i);
		}i+=3;
		
	}
}
