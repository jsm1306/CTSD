#include<stdio.h>
int main()
{
	int runs,score,bn=0;
	score=0;
	do
	{
		printf("Enter number of runs: ");
		scanf("%d", &runs);
		score=score+runs;
		bn++;
	} while(runs!=0);
	printf("Runs scored is %d in %d balls", score,bn);
}
