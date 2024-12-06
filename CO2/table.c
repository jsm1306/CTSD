#include<stdio.h>
int main()
{
	int num, s, r, size;
	printf("Enter the number");
	scanf("%d", &num);
	printf("Enter the size");
	scanf("%d", &size);
	s=1;
	while(s<=size)
	{ r= num*s;
		printf("\n%d x %d = %d",num, s,r );
		s++;
	}
}
