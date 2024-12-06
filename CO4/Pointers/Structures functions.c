#include<stdio.h>
struct rational
{
	int n;
	int d;
};
void accept(struct rational *);
void display(struct rational *);
void add(struct rational *p, struct rational *q, struct rational *r);
void product(struct rational *p,struct rational *q,struct rational *r);
int main()
{
	struct rational r1,r2,r3,r4;
	printf("For r1: ");
	accept(&r1);
	printf("For r2: ");
	accept(&r2);
	printf("\nr1 is: ");
	display(&r1);
	printf("\nr2 is: ");
	display(&r2);
	add(&r1,&r2,&r3);
  product(&r1,&r2,&r4);
  printf("\n sum is");
  display(&r3);
  printf("\nproduct is");
  display(&r4);
} void accept(struct rational *r)
{
	//printf("\n%u",sizeof (r));
	printf("\nEnter numerator and denominator: ");
	scanf("%d %d",&r->n,&r->d);
}
void display(struct rational *r)
{
	printf("\nnumerator and denominator is: ");
	printf("%d/%d",r->n,r->d);
}void add(struct rational *p, struct rational *q, struct rational *r)
{
	r->n = p->n * q->d + q->n *p->d;
  r->d = p->d * q->d;
}
void product(struct rational *p,struct rational *q,struct rational *r)
{
  r->n = p->n*q->n;
  r->d = p->d*q->d;
}
