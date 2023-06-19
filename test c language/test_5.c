#include<stdio.h>
void main()
{
	int  a,b,c;
    printf("enter the number of a:");
	scanf("%d",&a);
	printf("enter the number of b:");
	scanf("%d",&b);
	printf("enter the number of c:");
	scanf("%d",&c);
	(a>b && a>c) ?printf("b is max...")
                 :printf("c is max"); (b>a && b>c)?("a is max..")
                                                  :("c is max."); (c>a)?("a is max..")
                                                                       :("c is max..");
          	   
}
