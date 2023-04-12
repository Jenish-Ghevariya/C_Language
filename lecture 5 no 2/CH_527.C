#include<stdio.h>
#include<conio.h>
main()
{
  int a,b,c,d,e;
  clrscr();
  printf("enter a:");
  scanf("%d",&a);
  printf("enter b:");
  scanf("%d",&b);
  printf("enter c:");
  scanf("%d",&c);
  printf("enter d:");
  scanf("%d",&d);
  printf("enter E:");
  scanf("%d",&e);
  (a>b)?(a>c)?(a>d)?(a>e)?printf(" A is maximum..")
			 :printf("E is maximum..")
		   :(d>e)?printf("D is maximum..")
			 :printf("E is maximum..")
	      :(c>d)?(c>e)?printf("C is maximum..")
			  :printf("E is maximum..")
	      :(d>e)?printf("D is maximum..")
		    :printf("E is maximum..")
       :(b>c)?(b>d)?(b>e)?printf("B is maximum..")
			 :printf("E is maximum..")
		   :(d>e)?printf("D is maximum..")
			 :printf("E is maximum..")
	     :(c>d)?(c>e)?printf("C is maximum..")
			 :printf("E is maximum..")
		   :(d>e)?printf("D is maximum..")
			 :printf("E is maximum..");
  getch();
}