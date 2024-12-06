#include<stdio.h> 
struct day
{
int date;
int month;
int year;
};
int main()
{
struct day d1, d2;
printf("Enter your date of birth: \n");
scanf("%d",&d1.date);
scanf("%d",&d1.month);
scanf("%d",&d1.year);
d2.date=6;
d2.month=12;
d2.year=2023;
if(d2.month==d1.month && d2.date==d1.date)
printf("LUCKY");
else
printf("UNLUCKY");
}
