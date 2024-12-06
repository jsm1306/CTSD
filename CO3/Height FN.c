#include<stdio.h>
float convert(int f, float i)
{
	float cm;
	cm=f*30 + i*2.5;
	return cm;
}
int main()
{
	int f;
	float i,s;
	printf("Enter height in feet and inches: ");
	scanf("%d %f", &f, &i);
	s=convert(f,i);
	printf("Height in cm is= %.2f",s);
}
