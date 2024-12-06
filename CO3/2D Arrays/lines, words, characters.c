#include<stdio.h>
int main()
{
	char a[5000];
	int i, lc=1,wc=1;
	printf("Enter a Paragraph: ");
	scanf("%[^$]s",a);
	printf("\n%s",a);
	for(i=0;a[i]!= '\0';i++)
	{
		if(a[i]=='\n')
		{
			lc++;
		}
		if(a[i]==' '||a[i]=='\n')
		{
			wc++;
		}
	}
	printf("\nNumber of lines is %d",lc);
	printf("\nNumber of words is %d",wc);
	printf("\nNumber of characters is %d",i);
}
