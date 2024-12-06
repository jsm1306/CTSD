#include<stdio.h>
#include<string.h>
struct movie
{
	char name[50];
	int year;
	char dir[50];
	char lang[30];
	int rating;
};
int main()
{
	struct movie m1;
	printf("Enter Movie name: \n");
	scanf(" %[^\n]s",&m1.name);
	printf("Enter Release year: \n");
	scanf("%d",&m1.year);
	printf("Enter name of director: \n");
	scanf(" %[^\n]s",&m1.dir);
	printf("Enter movie language: \n");
	scanf(" %[^\n]s",&m1.lang);
	printf("Enter movie rating: \n");
	scanf("%d",&m1.rating);
	/*strcpy(m1.name,"Sholay");
	m1.year=1980;
	strcpy(m1.dir,"XYZ");
	strcpy(m1.lang,"Hindi");
	m1.rating=4.8;*/
	
	printf("%s\n %d\n %s\n %s\n %d\n",m1.name,m1.year,m1.dir,m1.lang,m1.rating);
}
