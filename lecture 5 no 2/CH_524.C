#include<stdio.h>
#include<conio.h>
main()
{
  int a,b,c,d,e;
  clrscr();
  printf("enter a:"); \
  scanf("%d",&a);
  printf("enter b:");
  scanf("%d",&b);
  printf("enter c:");
  scanf("%d",&c);
  printf("enter d:");
  scanf("%d",&d);
  printf("enter E:");
  scanf("%d",&e);
  if(a<b)
  {
    if(a<c)
    {
     if(a<d)
     {
       if(a<e)
       {
	 printf(" A is minimum..");
       }
       else
       {
	printf("E is minimum..");
       }
     }
     else if(d<e)
     {
      printf("D is minimum..");
     }
     else
     {
      printf("E is minimum..");
     }
    }
    else if(c<d)
    {
	 if(c<e)
	 {
	  printf("C is minimum..");
	 }
	 else
	 {
	  printf("E is minimum..");
	 }
    }
    else if(d<e)
    {
     printf("D is minimum..");
    }
    else
    {
     printf("E is minimum..");
    }
  }
  else
  {
   if(b<c)
   {
     if(b<d)
     {
       if(b<e)
	 {
	  printf("B is minimum..");
	 }
	 else
	 {
	  printf("E is minimum..");
	 }
     }
       else if(d<e)
       {
	printf("D is minimum..");
       }
       else
       {
	printf("E is minimum..");
       }
     }
     else if(c<d)
     {
      if(c<e)
      {
       printf("C is minimum..");
      }
      else
      {
       printf("E is minimum..");
      }
     }
     else if(d<e)
     {
      printf("D is minimum..");
     }
     else
     {
      printf("E is minimum..");
     }
   }
  getch();
}