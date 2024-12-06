#include<stdio.h>
struct address
{
	char street[50];
	char block[10];
	char area[50];
	char country[50];
	int pincode;
};
int main()
{
	struct address a1,a2;
	printf("Enter Details: \n");
	scanf(" %[^\n]s",&a1.street);
	scanf(" %[^\n]s",&a1.block);
	scanf(" %[^\n]s",&a1.area);
	scanf(" %[^\n]s",&a1.country);
	scanf(" %d",&a1.pincode);
	printf("Address is: \n");
	printf("%s\n %s\n %s\n %s\n %d",a1.street,a1.block,a1.area,a1.country,a1.pincode);
	printf("Enter Details: \n");
	scanf(" %[^\n]s",&a2.street);
	scanf(" %[^\n]s",&a2.block);
	scanf(" %[^\n]s",&a2.area);
	scanf(" %[^\n]s",&a2.country);
	scanf(" %d",&a2.pincode);
	printf("Address is: \n");
	printf("%s\n %s\n %s\n %s\n %d",a2.street,a2.block,a2.area,a2.country,a2.pincode);
	
}
