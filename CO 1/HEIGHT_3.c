#include<stdio.h>
int main()
{
	int ft, cm, rem;
	float inches;
	printf("Enter the height in cm");
	scanf("%d", &cm);
	ft = cm/30;
	rem = cm % 30;
	inches = rem/2.5;
	printf("\nHeight in ft and inches is %d'%f", ft, inches);
}
