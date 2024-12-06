#include<stdio.h>
int main()
{
	char a[100];
	int i,j;
	printf("Enter your name: ");
	scanf("%[^\n]s",a);
	for(i=0;a[i]!='\0';i++)
	{
		printf("%c\n",a[i]);
	}
	printf("Reverse Order:\n");
	for(j=i-1;j>=0;j--)
	{
		printf("\n%c",a[j]);
	}
}
