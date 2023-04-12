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
     if(a>b)
     {
      if(a>c)
       {
	 printf("a is greter..");
       }
      else
    {
      if(c>b)
       {
	 printf("c is greter..");
       }
      else
      {
	printf("b is greter..");
      }
      }
      }
     else
     {
      if(b>d)
      {
       printf("b is greter..");
      }
      else
      {
       printf("d is greter..");
      }
    }
      getch();
}

