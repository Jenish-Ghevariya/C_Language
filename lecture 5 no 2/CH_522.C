#include<stdio.h>
#include<conio.h>
main()
{
  int a,b,c;
  clrscr();
  printf("enter a:"); \
  scanf("%d",&a);
  printf("enter b:");
  scanf("%d",&b);
  printf("enter c:");
  scanf("%d",&c);
  if(a<b)
  {
    if(a<c)
    {
     printf("A is minimum..");
    }
    else
    {
    if(c<b)
    {
     printf("C is minimum..");
    }
    else
    {
     printf("B is minimum..");
    }
   }
  }
  else
  {
   if(b<c)
   {
    printf("B is minimum..");
   }
   else
   {
    printf("C is minimum..");
   }
  }
  getch();
}