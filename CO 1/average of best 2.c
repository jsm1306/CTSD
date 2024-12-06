#include<stdio.h>
int main()
{
	int a, b, c;
	float avg;
	printf("Enter the three subject scores");
	scanf("%d%d%d", &a, &b, &c);
	if((n1>n2)||(n1>n3))
{
  if(n2>n3)
  {
    avg = (float)(n1+n2)/2;
  }
  else
  {
    avg =(float)(n1+n3)/2;
  }
}
else
{
  avg = (float)(n2+n3)/2;
}
printf("Average is %.2f",avg);
}
	if((b>a) || (b>c))
	{ if(a>c)
	{
	avg=(float)(a+b)/2;
}
	else
	{
	avg=(float)(a+c)/2;}
	else
	{
		avg=(float)(b+c)/2;}
	printf("The average of best two numbers is %f", avg);
}
