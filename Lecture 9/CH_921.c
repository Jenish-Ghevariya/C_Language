#include<stdio.h>
main()
{
	int a=0,b=0,c=0,d=0,n,i;
	char pass[50];
	gets(pass);
	if(strlen(pass)>=6)
	{
		for(i=0;i<n;i++)
	 {
	 	 if(pass[i]>=65 && pass[i]<=90)
	 	  {
	 	 	  a++;
		  }
		 if(pass[i]>=97 && pass[i]<=122)
	 	  {
	 	 	  b++;
		  }
		 if(pass[i]>=48 && pass[i]<=57)
	 	  {
	 	 	  c++;
		  }
		 if((pass[i]>=33 && pass[i]<=47) || (pass[i]>=58 || pass[i]<=64) || (pass[i]>=91 || pass[i]<=96) || (pass[i]>=123 || pass[i]<=126))
	 	  {
	 	 	  d++;
		  }
	 }
	   if(a!=0 && b!=0 && c!=0 && d!=0)
	   {
	   	 printf("your password is valide...");
		 }
	   else
	   {
		   printf("your password is invalide..");
	   }
  }
}
