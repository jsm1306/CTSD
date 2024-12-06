void accept(int pos)
{
	do{
	int num;
	printf("Roll the dice and enter the number displayed");
	scanf("%d",&num);
	if(num<=6)
	{
		pos=1;
	while(pos<=100)
	{
		pos=pos+num;
		if(pos%7==0)
		pos=pos+7;//ladder
		printf("Bonus ladder, your position is %d",pos);
		else if(pos%5==0)
		pos=pos-5;//snake
		printf("OOPS! bitten by snake, your position is %d",pos);
		else if(pos%7==0 && pos%5==0)
		pos=pos-5;//snake
		printf("OOPS! bitten by snake, your position is %d",pos);
		else
		printf("Your position is %d",pos);
	}
}
else
{
	printf("Invalid number,Range is 1-6");
}
if(pos==100)
printf("Winner!!!");
} while(pos<=100);
}
#include<stdio.h>
int main()
{
	char space;
	int pos=1;
	printf("Welcome to Snake and Ladder");
	printf("\nHere are the rules to play the game:\n");
	printf("1.It consists of Snakes and Ladders at different position");
	printf("\n2.Your initial position is at one, roll the dice to move forward");
	printf("\n3.You will be descended 5 steps down if bitten by a snake and move 7 steps forward on climbing the ladder");
	printf("\n4.The game will end if you score 100.");
	scanf("%[^\n]s",space);
	printf("\nLet's start the game!!");
	accept(pos);
}
