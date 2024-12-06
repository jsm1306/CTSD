#include<stdio.h>
struct person
{
	char name[20];
	int ft;
	float inches;
};
int main()
{
	struct person p1,p2;
	float h1,h2;
	printf("Enter name, feet, inches for p1: ");
	scanf(" %[^\n]s",&p1.name);
	scanf("%d",&p1.ft);
	scanf("%f",&p1.inches);
	printf("\nEnter name, feet, inches for p2: ");
	scanf(" %[^\n]s",&p2.name);
	scanf("%d",&p2.ft);
	scanf("%f",&p2.inches);
	h1=p1.ft*30+p1.inches*2.5;
	h2=p2.ft*30+p2.inches*2.5;
	if(h1>h2)
	{
		printf("%s is tall",p1.name);
	} else if(h2>h1)
	{
		printf("%s is tall",p2.name);
	} else
	{
		printf("Same Height");
	}	
}
