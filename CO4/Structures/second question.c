#include<stdio.h>
struct student
{
	char name[50];
	int clas;
	int no;
	int submarks;
	int total;
};
int main()
{
	int n,i;
	printf("Enter array size: \n");
	scanf("%d",&n);
	struct student a[n];
	printf("Enter name, class, number,subject marks, total: \n");
	for(i=0;i<n;i++)
	{
		scanf(" %[^\n]s",&a[i].name);
	scanf("%d %d %d %d",&a[i].clas,&a[i].no,&a[i].submarks,&a[i].total);
	}
	for(i=0;i<n;i++)
	{
	printf(" %s\n",a[i].name);
	printf("%d\n %d\n %d\n %d\n",a[i].clas,a[i].no,a[i].submarks,a[i].total);
	}
	float avg,sum=0.0;
	for(i=0;i<n;i++)
	{
		sum= sum + a[i].total;
	} 
	printf("Total Marks is: %.2f",sum);
	avg=sum/n;
	printf("Average Marks is: %.2f",avg);
	
	
	
}
