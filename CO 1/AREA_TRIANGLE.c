#include<stdio.h>
#include<math.h>
int main()
{
	int a, b, c;
	float s, area;
	printf("Enter the values of a b and c");
	scanf("%d%d%d", &a, &b, &c);
	s = (float)(a+b+c)/2.0;
	printf("s = %f", s);
	area = sqrt(s*(s-a)*(s-b)*(s-c));
	printf("\nThe area of the triangle is %f", area);
}
