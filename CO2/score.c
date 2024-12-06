#include<stdio.h>
int main()
{
	int score, balls,runs;
	float s;
	score = 0;
	balls = 0;
	runs = 0;
	while(runs!=-1)
	{
		printf("Enter runs for ball number %d", balls+1);
		scanf("%d", &runs);
		if(runs!=-1)
		{
			score = score+runs;
		}
		balls++;
	}
	s=((float)(score)/balls)*100;
	printf("\nThe total score is %d", score);
	printf("\nThe total balls faced is %d", balls++);
	printf("\nThe strike rate is %.2f",s);
}
