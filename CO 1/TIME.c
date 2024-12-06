#include<stdio.h>
int main()
{
	int hours, minutes, seconds, time;
	printf("Enter the time in sec");
	scanf("%d", &time);
	hours = time/3600;
	minutes = (time - 3600*hours)/60;
	seconds = (time - 3600*hours - minutes*60);
	printf("The given time in hours minutes and seconds is %d hours %d minutes %d seconds", hours, minutes, seconds);
}
