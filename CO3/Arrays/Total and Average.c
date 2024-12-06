#include<stdio.h>
int main()
{
	int i,n,total=0; 
	float avg;
	printf("Enter number of players: ");
	scanf("%d",&n);
	int runs[n];
	printf("Enter number of runs of each player: ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&runs[i]);
	}
	for(i=0;i<n;i++)
	{
		total = total + runs[i];
	} avg = (float)total/n;
	printf("Total runs=%d",total);
	printf("\nAverage is %.2f",avg);
}
