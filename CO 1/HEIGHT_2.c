#include<stdio.h>
int main()
{
	int cm, inches, ft;
	printf("Enter the height in cm \n");
	scanf("%d", &cm);
	ft = 0.0328084*cm;
	inches = 0.393701*cm;
	printf("Height in ft and inches is %d ft' %d inches",ft,inches);
}
