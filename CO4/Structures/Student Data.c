#include<stdio.h>
struct student
{
	int id;
	char name[20];
	char branch[5];
	float fees;
	float cgpa;
};
int main()
{
	struct student s1;
	float d;
	printf("Enter id, name, branch, fees, cgpa of student: ");
	scanf("%d",&s1.id);
	scanf(" %[^\n]s",&s1.name);
	scanf(" %[^\n]s",&s1.branch);
	scanf("%f",&s1.fees);
	scanf("%f",&s1.cgpa);
	printf("Student information is %d %s %s %.2f %.2f",s1.id,s1.name,s1.branch,s1.fees,s1.cgpa);
	if(s1.cgpa>=9.0)
	{
		d=s1.fees*0.25;
	} else if(s1.cgpa>=8.0)
	{
		d=s1.fees*0.15;
	} else if(s1.cgpa>=7.0)
	{
		d=s1.fees*0.05;
	} else
	{
		d=0.0;
	}
	printf("\n Discount is:%.2f",d);
	printf("\n Fees after discount is:%.2f",s1.fees-d);
}
