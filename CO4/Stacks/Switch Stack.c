#include<stdio.h>
#define n 4
int s[n];
int top=-1,i;
void push(int data)
{
	if(top==n-1)
	{
		printf("Stack is full");
	}
	else
	{
		top=top+1;
		s[top]=data;
	}
}
int pop()
{
	if(top==-1)
	{
		printf("Stack is empty");
		return -1;
	}
	else
	{
		top=top-1;
		return s[top];
	}
}
int peep()
{
	if(top==-1)
	{
		printf("Stack is empty");
		return -1;
	}
	else
	{
		return s[top];
	}
}
void display()
{
	for(i=n;i>=0;i--)
	{
		printf("%d\n",s[i]);
	}
}
int main()
{
	int x,j,data;
	do
	{
	printf("Select a choice:\n 1.PUSH\n 2.POP\n 3.PEEP\n 4.DISPLAY\n");
	scanf("%d",&x);
	switch(x)
	{
		case 1:
			printf("Enter data to push\n");
			scanf("%d",&data);
			push(data);
			break;
		case 2:
			printf("POP\n");
			j=pop();
			printf("POP value is %d",j);
			break;
		case 3:
			printf("PEEP\n");
			j=peep();
			printf("PEEP value is: %d",j);
			break;
		case 4:
			printf("DISPLAY\n");
			display();
			break;
			
	}
}
while(1);
}
