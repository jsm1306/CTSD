#include<stdio.h>
int main()
{
	int ch;
	printf("1.English\n2.Telugu\n3.Hindi\n4.Tamil");
	printf("\nEnter your choice");
	scanf("%d", &ch);
	switch(ch)
	{
		case 1:
			printf("Happy Onam");
			break;
		case 2:
			printf("Onam Shubhakankshalu");
			break;
		case 3:
			printf("Onam ki shubhkaamnaye");
			break;
		case 4:
			printf("Onam Nalvazthukal");
			break;
		default:
			printf("Invalid Choice");
				
	}
}

