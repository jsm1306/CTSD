#include<stdio.h>
int main()
{
	int eng, mat, sci;
	printf("Enter the marks of each subject");
	scanf("%d%d%d", &eng, &mat, &sci);
	if((eng<mat) && (eng<sci))
	{
		printf("eng is the least scored subject");
	} else if(mat<sci)
	{
		printf("mat is the least scored subject");
	}else
	{
		printf("sci is the least scored subject");
	}
}

