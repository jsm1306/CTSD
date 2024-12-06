#include<stdio.h>
int main()
{
	int days;
	float price;
	char r,a,book;
	printf("Enter days");
	scanf("%d",&days);
	printf("Enter book type");
	scanf("%c",&book);
	scanf("%c",&r);
	scanf("%c",&a);
	if(days>=1)
	{
		if(book='r')
		{
		price=days*0.50;
		printf("%.2f",price);
		}
		else if (book='a')
		{
			price=days*1.00;
			printf("%.2f",price);
		}
	}
		else
		{
			printf("Invalid Input");
		}
	
}
