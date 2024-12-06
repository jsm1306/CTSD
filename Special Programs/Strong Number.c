#include<stdio.h>
int main()
{
	int original, num, i, r, fact, sum=0;
	printf("Enter a number: ");
	scanf("%d", &num);
	original=num;
	while(num>0)
	{
		r=num%10;
		fact=1;
		for(i=1;i<=r;i++)
		{
			fact=fact*i;
		} sum=sum+fact;
		num=num/10;
	} if(sum==original)
		printf("%d is a strong number",original);
		 else
	printf("%d is a strong number",original);
	
	
}
