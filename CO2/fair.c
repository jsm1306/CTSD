/*family members >=6, show= morning
m=20%
e=10%
*/
#include<stdio.h>
int main()
{
	int f,discount,amount,tamount;
	char show;
	scanf("%d",&f);
	if(f>=6)
	{	 
    scanf("%c",&show);

		if('M')
		{
			amount=f*100;
			discount=amount*20/100;
			tamount=amount-discount;
			printf("\nTotal fair=%d",tamount);
		}
		else if('E')
		{
			amount=f*150;
			discount=amount*15/100;
			tamount=amount-discount;
			printf("\nTotal fair=%d",tamount);
		}
	}
	else
	{
		amount=f*150;
			
			printf("\nTotal fair=%d",amount);
	}
}
