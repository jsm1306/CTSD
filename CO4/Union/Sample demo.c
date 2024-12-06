#include<stdio.h>
struct sample
{
	int x;
	float y;
	char z;
};
union demo
{
	int a;
	float b;
	char c;
};
int main()
{
	struct sample s1 = {10, 3.14, 'A'};
	union demo d1 = {20, 6.28,'B'};
	printf("Structure is %d %.2f %c",s1.x,s1.y,s1.z);
	printf("\nUnion is %d %.2f %c",d1.a,d1.b,d1.c);
	printf("\nSize of structure is %d,size of union is %d",sizeof(s1),sizeof(d1));
}
