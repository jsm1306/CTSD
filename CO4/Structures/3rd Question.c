#include<stdio.h>
struct complex
{
	int r;
	int i;
};
void accept(struct complex *c)
{
	printf("Enter Real part and Imaginary part: \n");
	scanf("%d %d",&c->r,&c->i);
}
void display(struct complex *c)
{
	printf("The number is: %d + %di\n",c->r,c->i);
}
void sum(struct complex *c1,struct complex *c2,struct complex *c3)
{
	c3->r = c1->r + c2->r;
	c3->i = c1->i + c2->i;
	printf("The Sum is %d + %di",c3->r,c3->i);	
}
int main()
{
	struct complex c1,c2,c3;
	printf("Enter first complex number: \n");
	accept(&c1);
	display(&c1);
	printf("Enter second complex number: \n");
	accept(&c2);
	display(&c2);
	sum(&c1,&c2,&c3);
}
