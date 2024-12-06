/*To accept user's email id & find percentage of number of uppercase,
 lowercase, digits, special characters*/
 #include<stdio.h>
 #include<ctype.h>
 #include<string.h>
 int main()
 {
 	char a[100];
 	int l;
 	printf("Enter your Email Id: ");
 	scanf("%[^\n]s",a);
 	l=strlen(a);
 	float s,t,u,v;
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
	 } s=(float)(lc*100)/l;
	 t=(float)(uc*100)/l;
	 u=(float)(dc*100)/l;
	 v=(float)(sc*100)/l;
	 printf("Number of lowercases = %.3f",s);
	 printf("\nNumber of uppercases = %.3f",t);
	 printf("\nNumber of digits = %.3f",u);
	 printf("\nNumber of special characters = %.3f",v);
 	
 }
