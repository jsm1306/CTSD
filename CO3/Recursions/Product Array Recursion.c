#include<stdio.h>
int prarray(int a[],int n)
{
	if(n==0)
	return 0;
	else
	return a[n-1]*prarray(a,n-1);//since index number ends with n-1 that is 4 in this case
}
int main()
{
	int a[] = {20,15,30,40,25}, s;//initialising array
	s = prarray(a,5);
	printf("Product of elements of array is %d",s);
}
