#include<stdio.h>
int main()
{
	char a[5000];
	int i, lc=1,wc=1,u=0,l=0;
	printf("Enter a Paragraph: ");
	scanf("%[^$]s",a);
	printf("%s",a);
	for(i=0;a[i]!= '\0';i++)
	{
		if(a[i]=='\n')
		{
			lc++;//lines count
		}
		if(a[i]==' '||a[i]=='\n')
		{
			wc++;//word count
		}
		if(isupper(a[i]))
		u++;
		else if(islower(a[i]))
		l++;
	}
	printf("\nNumber of lines is %d",lc);
	printf("\nNumber of words is %d",wc);
	printf("\nNumber of letters is %d",l+u);
}
