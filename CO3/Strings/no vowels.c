#include<stdio.h>
int main()
{
	int i;
	char a[100];
	printf("Enter a word: ");
	scanf("%[^\n]s",a);
	for(i=0;a[i]!='\0';i++)
	{
		if(!((a[i])=='A'||(a[i])=='E'||(a[i])=='I'||(a[i])=='O'||((a[i])=='U')||
		((a[i])=='a')||((a[i])=='e')||((a[i])=='i')||((a[i])=='o')||((a[i])=='u')))
		{
			printf("%c",a[i]);
		}
	}
}
