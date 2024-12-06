#include<stdio.h>
#include<string.h>
int main()
{
	char a[100];
	int i,l=0;
	printf("Enter a name: ");
	scanf("%[^\n]s",a);
	printf("Your name is %s",a);
	/*for(i=0;a[i]!='\0';i++)
	{
		l++;
	}
	printf("\nLength of the string is %d",l);*/
	/*for(i=0;a[i]!='\0';i++);*/
	l=strlen(a);
	printf("\nLength of the string is %d",l);
	
}
