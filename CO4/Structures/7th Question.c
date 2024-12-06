#include<stdio.h>
#include<string.h>
struct train
{
	int no;
	char name[19];
	char from[19];
	char to[19];
	char coach[19];
	int dis;
};
int main()
{
	struct train t;
	printf("Enter Train number, source,destination,coachtype,distance: \n");
	scanf(" %d",&t.no);
	scanf(" %[^\n]s",&t.name);
	scanf(" %[^\n]s",&t.from);
	scanf(" %[^\n]s",&t.to);
	scanf(" %[^\n]s",&t.coach);
	scanf(" %d",&t.dis);
	printf("Train Number: %d\nName: %s\nSource: %s\nDestination: %s\nCoach Type:%s\n,Distance:%d\n",t.no,t.name,t.from,t.to,t.coach,t.dis);
	if(strcmp(t.coach,"AC")==0)
	{
		printf("Cost is: %d",5*t.dis);
	}else if(strcmp(t.coach,"Sleeper")==0)
	{
		printf("Cost is: %d",2*t.dis);
	}else if(strcmp(t.coach,"Sitting")==0)
	{
		printf("Cost is: %d",1*t.dis);
	} else
	{
		printf("Invalid Coach Type\n");
	}
}
