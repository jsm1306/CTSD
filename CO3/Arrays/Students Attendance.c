#include<stdio.h>
int main()
{
	int i,n,c;
	printf("Enter number of students: ");
	scanf("%d",&n);
	int a[n];
	printf("Enter attendance for %d students: ",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	} printf("Attendance in regular order");
	for(i=0;i<n;i++)
	{
		printf("\n%d",a[i]);
	}  
	printf("\nAttendance in reverse order:");
	for(i=n-1;i>=0;i--)
	{
		printf("\n%d",a[i]);
	}
	printf("\nStudents having less than 75 attendance:");
	for(i=0,c=0;i<=n-1;i++)
	{
	if(a[i]<75)
	{
		c++;
	}
} printf("\nThere are %d number of students",c);	
}
