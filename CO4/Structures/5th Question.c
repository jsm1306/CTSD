#include<stdio.h>
struct day
{
	int date;
	int month;
	int year;
};
int main()
{
	struct day dob,cu;
	printf("Enter your date of birth: \n");
	scanf("%d",&dob.date);
	scanf("%d",&dob.month);
	scanf("%d",&dob.year);
	printf("Enter current date: \n");
	scanf("%d",&cu.date);
	scanf("%d",&cu.month);
	scanf("%d",&cu.year);
	if(cu.month > dob.month)
	{
		printf("Age : %d",cu.year-dob.year);
	} 
	else 
	{
		printf("Age : %d",cu.year-dob.year-1);
	}
}
