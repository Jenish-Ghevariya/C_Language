#include<stdio.h>
#include<conio.h>
main()
{
  int a=1,n;
  clrscr();
  printf("Enter the N:");
  scanf("%d",&n);
  do
  {
   printf("%d\t",a);
   ++a;
  }
  while(a<=n);
  getch();
}


