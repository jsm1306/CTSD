#include<stdio.h>
void table(int tn, int ts)
{
	int i;
	for(i=1;i<=ts;i++)
	{
		printf("%d * %d = %d\n",tn,i,tn*i);
	}
}
int main()
{
	int tn,ts;
	printf("Enter table number and table size: ");
	scanf("%d %d",&tn,&ts);
	table(tn,ts);
}
