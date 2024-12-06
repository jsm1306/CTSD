#include<stdio.h>
int main()
{
	int distance,total,trips=0;
	total=0;
	do
	{
		printf("Enter distance travelled");
		scanf("%d", &distance); 
		total=total+distance;
		trips++;
	} while(distance!=-1);
	printf("Distance travelled is %d in %d trips", total,trips);
}
