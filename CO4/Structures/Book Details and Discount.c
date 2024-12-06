#include<stdio.h>
struct book
{
	char name[300];
	char author[30];
	int price;
};
int main()
{
	struct book b;
	int n;
	float bill;
	printf("Enter name, author name, and price of the book: ");
	scanf(" %[^\n]s",&b.name);
	scanf(" %[^\n]s",&b.author);
	scanf(" %d",&b.price);
	printf("Enter number of copies: \n");
	scanf("%d",&n);
	bill= b.price * n;
	if(bill>500 && n>100)
	{
		printf("Cost in total is %.2f",bill*0.50);
	} else if(bill<500 && n>100)
	{
		printf("Cost in total is %.2f",bill*0.30);
	} else if(bill>500 && n<100)
	{
		printf("Cost in total is %.2f",bill*0.10);
	} else if(bill<500 && n<100)
	{
		printf("Cost in total is %.2f",bill);
	} else
	{
		printf("Invalid Data");
	}
}
