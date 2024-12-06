#include<stdio.h>
void accept();
void display();
int binarysearch();
int main()
{
	int n,l;
	printf("Enter array size: ");
	scanf("%d",&n);
	int b[n];
	accept(b,n);
	display(b,n);
	l=binarysearch(b,n);
	if(l==-1)
	{
	printf("Data not found");
}
	else
	{
		printf("\nData is found in %d array index",l);
	}
} void accept(int b[], int n)
{
	int i;
	printf("Enter data for %d arrays",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&b[i]);
	}
}
void display(int b[], int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		printf("\n%d",b[i]);
	}
}
int binarysearch(int b[], int n)
{
	int x,si,mi,ei;
	printf("\nEnter data to serach: ");
	scanf("%d",&x);
	si=0;
	ei=n-1;
	while(si<=ei)
	{
	mi=(si+ei)/2;
	if(x==b[mi])
	{
	return mi;
	} else if(x < b[mi])
	{
		ei=mi-1;
	} else
	{
		si=mi+1;
	}
}
	return -1;	
}
