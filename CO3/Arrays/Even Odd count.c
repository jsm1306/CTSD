#include<stdio.h>
int main()
{
	int i,n,c,o=0;
	printf("Enter number of arrays: ");
	scanf("%d",&n);
	int a[n];
	printf("Enter data to be stored in %d arrays: ",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		printf("\n%d",a[i]);
	} 
	printf("\nThe number of even elements are: ");
	for(i=0,c=0;i<n;i++)
	{
		if(a[i]%2==0)
		{
			c++;
		} else
		{
			o++;
		}
	}printf("%d",c);
	printf("\nNumber of odd elements is %d",o);
}
