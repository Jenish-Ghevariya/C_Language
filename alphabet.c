#include<stdio.h>

main()
{
	int a,b,c;
	
	printf("Enter the a : ");
	scanf("%d",&a);
	printf("Enter the b : ");
	scanf("%d",&b);
	printf("Enter the c : ");
	scanf("%d",&c);
	
	(a>b)  
		 ? printf("A is greater")
		 :(a>c)
		 	?printf("A is greater")
		 	:(b>c)
		 		  ?printf("B is greater")
		 		  :printf("C is greater");
}
