#include<stdio.h>
int main()
{
    int a, year, b, c, d, e, f;
    printf("Enter your birth year\n");
    scanf("%d",&year);
    b = 2023- year; //age
    printf("Your age is %d \n", b);
    printf("Enter your birth month \n");
    scanf("%d" , &c);
    d=8-c;
    e= (365*b)+(d*30);//days
    printf("Therefore the number of days after your birth is %d \n ", e);
    f=e*24;
    printf("The number of hours after your birth is %d \n", f);
}
