 /*To accept user's email id & find number of uppercase,
 lowercase, digits, special characters*/
 #include<stdio.h>
 #include<ctype.h>
 int main()
 {
 	char a[100];
 	printf("Enter your Email Id: ");
 	scanf("%[^\n]s",a);
 	int i, lc, uc, dc, sc;
 	lc=uc=dc=sc=0;
 	for(i=0;a[i]!='\0';i++)
 	{
 		if(islower(a[i]))
 		{
 			lc++;
		 }
		 else if(isupper(a[i]))
 		{
 			uc++;
		 }else if(isdigit(a[i]))
 		{
 			dc++;
		 } else
		 {
		 	sc++;
		 }
	 } 
	 printf("Number of lowercases = %d",lc);
	 printf("\nNumber of uppercases = %d",uc);
	 printf("\nNumber of digits = %d",dc);
	 printf("\nNumber of special characters = %d",sc);
 	
 }
