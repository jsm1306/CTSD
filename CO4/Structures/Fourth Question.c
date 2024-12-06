#include<stdio.h>
struct address
{
	char street[30];
	char block[12];
	char area[30];
	char country[70];
	int code;
};
void accept(struct address *c)
{
	scanf(" %[^\n]s",c->street);
	scanf(" %[^\n]s",c->block);
	scanf(" %[^\n]s",c->area);
	scanf(" %[^\n]s",c->country);
	scanf(" %d",&c->code);
}
void display(struct address *c)
{
	printf("%s\n%s\n%s\n%s\n%d",c->street,c->block,c->area,c->country,c->code);
}
int main()
{
	struct address c1,c2;
	printf("Enter street, block, area, country, pincode address of first person:\n");
	accept(&c1);
	display(&c1);
	printf("Enter street, block, area, country, pincode address of second person:\n");
	accept(&c2);
	display(&c2);
}
