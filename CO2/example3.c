#include<stdio.h>
int main()
{
	int f, final, amount;
	float discount;
	char show;
	scanf("%d  %c", &f, &show);
	if(f<=6)
	{ if('M')
	{
		amount = 100;
		discount=0.20;
	} 
	else if('E')
	{
		amount = 150;
		discount= 0.15;
	}
}
    else if(f>6)
{
	amount = 150;
	discount = 0;
}
final = f*amount-(f*amount*discount);
printf("The total price is: %d", final);
}
