#include<stdio.h>
#include<conio.h>
main()
{
  int n;
  clrscr();
  printf("enter the value of n:");
  scanf("%d",&n);
  if(n>0)
  {
   printf("positive number");
  }
  else if(n<0)
  {
   printf("negative number");
  }
  else if(n==0)
  {
   printf("the number is nutural");
  }
  getch();
}













