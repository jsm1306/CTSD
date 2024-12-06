#include<stdio.h>
int main()
{
	int x, btech, bba, mba, bca;
	printf("Enter the total number of students");
	scanf("%d" ,&x);
	btech = 0.50*x;
	mba = 0.20*x;
	bba = 0.10*x;
	bca = 0.20*x;
	printf("The total number of students in b.Tech are %d", btech);
	printf("\nThe total number of students in mba are %d", mba);
	printf("\nThe total number of students in bba are %d", bba);
	printf("\nThe total number of students in bca are %d", bca);
}
