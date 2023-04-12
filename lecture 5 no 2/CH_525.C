#include<stdio.h>
#include<conio.h>
main()
{
   int a,b,c;
   clrscr();
   printf("Enter a:");
   scanf("%d",&a);
   printf("Enter b:");
   scanf("%d",&b);
   printf("enter c:");
   scanf("%d",&c);
   (a>b)?(a>c)?printf("A is maximum...")
	      :(c>b)?printf("c is maximum...")
		    :printf("b is maximum...")
	:(b>c)?printf("b is maximum...")
	     :printf("c is maximum...");
   getch();
}