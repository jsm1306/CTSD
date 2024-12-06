#include<stdio.h>
struct coordinate
{
	int x;
	int y;
};
int main()
{
	struct coordinate r;
	printf("Enter x and y values: \n");
	scanf("%d",&r.x);
	scanf("%d",&r.y);
	printf("Coordinates are: (%d,%d)\n",r.x,r.y);
	if(r.x>0 && r.y>0)
	printf("1st Quadrant");
	else if(r.x<0 && r.y>0)
	printf("2nd Quadrant");
	else if(r.x<0 && r.y<0)
	printf("3rd Quadrant");
	else if(r.x>0 && r.y<0)
	printf("4th Quadrant");
	else
	printf("Origin");
}
