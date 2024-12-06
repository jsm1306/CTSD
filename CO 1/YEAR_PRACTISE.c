#include<stdio.h>
int main()
{
	int year, age, days, hours, month, rem;
	printf("Enter your birth year");
	scanf("%d" , &year);
	age = 2023-year;// age
	printf("\nThe calculated age is %d" ,age);
	printf("\nEnter your birth month");
	scanf("%d" , &month);
	rem = 8-month; // remaining months calculation
	days = age*365 +rem*30;
	printf("\n The number of days after your birth is %d", days);
	hours = days*24;// total number of hours
	printf("\n The number of hours after your month is %d", hours);
	
	
}
