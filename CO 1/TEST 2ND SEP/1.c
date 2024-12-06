#include<stdio.h>
int main()
{
	int days;
	char book;
	float fine;
	printf("Enter");
	scanf("%d  %c", &days, &book);
	if(book =='R')
	{ fine=days*0.50;
		printf("Fine for overdue book:$ %.2f", fine);
	} else if(book=='A')
	{fine=days*1.00;
		printf("Fine for overdue book:$ %.2f", fine);
	}	
}
