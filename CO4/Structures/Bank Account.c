#include<stdio.h>
struct account
{
	int no;
	char name[20];
	int balance;
};
int main()
{
	struct account s;
	int t;
	printf("Enter account number, holder name, balance: ");
	scanf(" %d",&s.no);
	scanf(" %[^\n]s",&s.name);
	scanf(" %d",&s.balance);
	printf("Enter your choice: ");
	scanf("%d",&t);
	switch(t)
	{
		case 1:
			printf("Deposit");
			int d;
			printf("\nEnter amount to deposit: ");
			scanf("%d",&d);
			printf("\nBank Balance is %d",d + s.balance);
			break;
		case 2:
			printf("Withdrawal");
			int w;
			printf("\nEnter amount to withdraw: ");
			scanf("%d",&w);
			if(s.balance < w)
			{
				printf("Withdrawal not possible: ");
			}
			else
			{
				printf("\nBank Balance is %d",s.balance - w);
			}
			break;
		case 3:
			printf("Bank Balance");
			printf("\nYour bank balance is: %d",s.balance);
			break;
		default:
			printf("Invalid Choice");
	}
	
}
