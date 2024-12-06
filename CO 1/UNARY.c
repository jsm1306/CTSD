#include<stdio.h>
int main()
{
	int i = 10, j = 5, k=9,l;
	l=++i +j++ + i++ *k;
	printf("%d %d %d %d", i, j, k, l);
}
