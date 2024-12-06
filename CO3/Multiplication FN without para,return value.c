#include<stdio.h>
void table()
{
	int i;
	int tn,ts;
	printf("Enter table number and table size: ");
	scanf("%d %d",&tn,&ts);
	for(i=1;i<=ts;i++)
	{
		printf("%d * %d = %d\n",tn,i,tn*i);
	}
}
int main()
{
	table();
}
