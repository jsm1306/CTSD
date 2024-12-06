#include<stdio.h>
int main()
{
float bill, units;
printf("Enter no of units");
 scanf("%f", &units);
if(units<=50)
{
bill=units*3;
printf("The bill is = %.2f", bill); 
}
else if(units<=100)
{ bill=50*3+(units-50)X4;
printf("The bill is = %.2f", bill); 
}
else if(units<=300)
{ bill =50*3+100*4 +(Units-150)x5+100;
 printf("The bill is =%.2f", bill);
 }
else
printf("invalid units);
}
