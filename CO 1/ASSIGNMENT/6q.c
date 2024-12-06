#include<stdio.h>
int main()
{
	int distance, time;
	float speed;
	printf("Enter the distance travelled");
	scanf("%d", &distance);
	printf("Enter the time taken");
	scanf("%d", &time);
	speed =(float)distance/time;
	printf("The Speed is %f", speed);
}
