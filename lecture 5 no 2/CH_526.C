#include<stdio.h>
#include<conio.h>
main()
{
     int a,b,c,d;
     clrscr();
     printf("enter the valur of a:");
     scanf("%d",&a);
     printf("enter the value of b:");
     scanf("%d",&b);
     printf("enter the value of c:");
     scanf("%d",&c);
     printf("enter the value of d:");
     scanf("%d",&d);
     (a>b)?(a>c)?printf("A is maximum..")
      :(c>b)?printf("C is maximum..")
	    :printf("B is maximum..")
      :(b>d)?printf("B is maximum..")
	    :printf("D is maximum..");

     getch();
}

