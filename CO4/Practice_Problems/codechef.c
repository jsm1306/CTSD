#include <stdio.h>

int main(void) {
	// your code goes here
	int x,l,r,p;
	scanf("%d",&x);
	l=x%10;
	p=x/10;
	r=p%10;
	printf("K%d%d",r,l);

}


