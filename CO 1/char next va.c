#include<stdio.h>
int main()
{
	char s;
	printf("Enter an alphabet");
	scanf("%c", &s);
	int v;
	// 65-90,97-122 
	printf("\nEnter any selection");
	scanf("%d", &v);
	if(s>=65 && s<=90)
	{
			printf("%c", s+1);
	} else if(s>=97 && s<=122)
	{
			printf("%c", s-1);
}
else
{
	printf("Invalid");
			
	}
}
