#include<stdio.h>
#include<conio.h>
main()
{
   int a,b;
   clrscr();
   printf("Enter the value of a:");
   scanf("%d",&a);
   printf("Enter the value of b:");
   scanf("%d",&b);
   (a>b)?printf("A is Maximum")
	:printf("B is maximum");
   getch();

}