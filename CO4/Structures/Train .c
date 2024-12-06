#include<stdio.h>
#include <string.h>
struct train 
{
    int n;
    char from[50];
    char city[50];
    char to[50];
    char what[50];
    float c;
}t1;
int main()
{
    struct train t1;
    printf("Enter Train Number: ");
    scanf("%d",&t1.n);
    printf("Enter Train Name: ");
    scanf("%s",t1.from);
    printf("Enter Source: ");
    scanf("%s",t1.city);
    printf("Enter Destination: ");
    scanf("%s",t1.to);
    printf("Enter Coach Type (AC/Sleeper/Sitting): ");
    scanf("%s",t1.what);
    printf("Enter Distance:");
    scanf("%f",&t1.c);
    printf("\nTrain Details:\n");
    if(strcmp(t1.what,"AC")==0)
    {
        float cost=t1.c*5;
    
    printf("Train Number: %d\nTrain Name: %s\nSource: %s\nDestination: %s\nCoach Type: %s\nDistance: %.2f\nTicket Cost: $%.2f",t1.n,t1.from,t1.city,t1.to,t1.what,t1.c,cost);
    }  
    else{
        float cost=t1.c*2;
        printf("Train Number: %d\nTrain Name: %s\nSource: %s\nDestination: %s\nCoach Type: %s\nDistance: %.2f\nTicket Cost: $%.2f",t1.n,t1.from,t1.city,t1.to,t1.what,t1.c,cost);
}
}
