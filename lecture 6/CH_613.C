#include<stdio.h>
#include<conio.h>
main()
{
  int a=1,n;
  clrscr();
  printf("Enter the N:");
  scanf("%d",&n);
  while(a<=n)
  {
      printf("%d\t",a);
      ++a;
  }
  getch();
}

