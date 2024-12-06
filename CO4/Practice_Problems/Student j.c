#include<stdio.h>
int main()
{
	char name[50];
	int age;
	float cgpa;
	FILE *fp;
	printf("Enter name age Cgpa: \n");
	scanf("%s %d %f",name,&age,&cgpa);
	fp = fopen("S:\\student.dat","a");
	fprintf(fp,"%s %d %.2f",name,age,cgpa);
	fclose(fp);
}
