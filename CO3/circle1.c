#include<stdio.h>
float area(float r);//function prototype
//fn defintion first raasi, function call tarvata
int main()
{
	float s,r;
	printf("Enter radius of circle");
	scanf("%f",&r);
	s=area(r);
	printf("The area of circle is %.2f",s);
}
float area(float r)
{
	float s;
	s=3.14*r*r;
	return s;
}
