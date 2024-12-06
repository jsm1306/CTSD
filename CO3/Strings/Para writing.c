#include<stdio.h>
int main()
{
	char a[5000];
	printf("Enter a Paragraph: ");
	scanf("%[^$]s",a);
	printf("\n%s",a);
}
