#include<stdio.h>
int main()
{
	float x,y,z,a,b,c,m;
	scanf("%f%f%f%f%f%f%f", &x,&y,&z,&a,&b,&c,&m);
	printf("enter the amount of potatoes to be bought in kgs, %f,x");
	printf("/nenter the amount of tomatoes to be bought in kgs, %f,y");
	printf("/nenter the amount of lady's finger to be bought in kgs ,%f,z");
	printf("/nenter the cost of each potato ,%f,a");
	printf("/nenter the cost of each tomato, %f,b");
	printf("/nenter the cost of each lady's finger ,%f,c");
	m = x*a+y*b+z*c;
	printf("The total cost of the vegetables is %m, m");
}
