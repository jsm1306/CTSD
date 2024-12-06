#include<stdio.h>
int main()
{
	int marks;
	printf("enter the marks");
	scanf("%d", &marks);
  if(marks>=320){
    printf("paased all four levels");
    printf("\n won the gold medal");
  }
  if(marks>=240){
    printf("passed all three levels");
    printf(" \n won silver medal");
  }
  if(marks>=160){
    printf("passed two levels");
    printf("\n won bronze medal");
  }
  else{
    printf("passed 1 level");
    printf("\n no medal");
    
  }
}
