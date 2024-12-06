#include<stdio.h>
int main()
{
	int x, y, z, i, j;
	float strikerate, score, balls;
	printf("Enter the values of each");
	scanf("%d%d%d%d%d", &x, &y, &z, &i, &j);
	score = x*4+ y*6+ z*3+ i*2+ j*1;
	printf("The total score is %f", score);
	printf("\nEnter the number of balls faced");
	scanf("%f", &balls);
	strikerate = (score/balls)*100;
	printf("The strikerate is %f" ,strikerate);
}

