#include<stdio.h>
int main()
{
	int x, cost, i, j, k, costsamosa, costcake, costchocolates, samosa, cake, chocolates;
	printf("Enter the number of friends attended the party");
	scanf("%d", &x);
	samosa = 2*x;
	chocolates = 3*x;
	cake = 0.1*x;
	printf("Enter the cost of each samosa");
	printf("\nEnter the cost of each chocolates");//i
	printf("\nEnter the cost of cake");
	scanf("%d%d%d", &i, &j, &k);
	costsamosa = samosa*i ;
	costchocolates = chocolates*j;
	costcake = cake*k;
	cost = costsamosa + costchocolates + costcake;
	printf("\nThe total cost to be spent is %d", cost);
	}
