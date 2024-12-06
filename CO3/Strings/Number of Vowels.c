#include<stdio.h>
int main()
{
	char name[50];
	int c=0,i,d=0;
	printf("Enter your name: ");
	scanf("%[^\n]s",name);
	for(i=0;name[i]!='\0';i++)
	{
		if(name[i]!=' ')
		d++;
	}
	for(i=0;name[i]!='\0';i++)
	{
		if((name[i] =='a')||(name[i] =='e')||(name[i] =='i')||
		(name[i] =='o')||(name[i] =='u')||(name[i] =='A')||(name[i] =='E')||(name[i] =='I')||
		(name[i] =='O')||(name[i] =='U'))
		 c++;
	} printf("Number of Vowels is %d",c);
	printf("\nNumber of Consonants is %d",d-c);
}
