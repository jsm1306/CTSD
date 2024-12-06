#include<stdio.h>
int main()
{
	int x=5;
	int y=3;
	int result = x | y & x<<1;
	printf("Result: %d\n",result);
}
