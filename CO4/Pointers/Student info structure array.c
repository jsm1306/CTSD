#include<stdio.h>
struct student 
{
	int id;
	char name[20];
	float cgpa;
};
int main()
{
	int n,i,max;
	printf("Enter number of students: ");
	scanf("%d",&n);
	struct student s[n];
	printf("Enter student id, name, cgpa: ");
	for(i=0;i<n;i++)
	{ printf("enter details for s[%d]",i);
	scanf("%d",&s[i].id);
	scanf(" %[^\n]s",&s[i].name);
	scanf("%f",&s[i].cgpa);
} 
for(i=0;i<n;i++)
{
	printf("details for s[%d]",i);
	printf("\n%d  %s  %.2f",s[i].id,s[i].name,s[i].cgpa);
}
float sum=0.0, avg;
for(i=0;i<n;i++)
{
	sum=sum+s[i].cgpa;
} avg= sum/n;
printf("Average cgpa is %.2f");
max=s[0].cgpa;
int j=0;
for(i=1;i<n;i++)
{
	if(s[i].cgpa>max)
	{
		max=s[i].cgpa;
		j=i;//j will have index of maximum
	}
}printf("\nMaximum Cgpa is %.2f and scored by %s",max,s[j].name);
}
