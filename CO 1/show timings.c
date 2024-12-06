#include<stdio.h>
int main()
{
	float discount,total,fare,n;
	char time;
	printf("Enter number of family members: ");
	scanf("%f", &n);
	printf("Enter movie timings: ");
	scanf("%c", &time);
	if(n>6)
	{
		if(time = 'M')
		{
			fare= 100;
			discount=0.20;
		} else if(time = 'E')
		{
			fare= 150;
			discount=0.15;
		}
	} else if(n<6)
	{
		fare=150;
		discount=0.00;
	} total=(n*100)-(n*100*discount);
	printf("%f", total);
	
}
