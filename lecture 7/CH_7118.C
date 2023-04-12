// 0
// 0 1
// 0 1 0
// 0 1 0 1
// 0 1 0 1 0
#include<stdio.h>
#include<conio.h>
main()
{
  int i,j;
  clrscr();
  for(i=0;i<=4;i++)
  {
      for(j=0;j<=i;j++)
      {
	  printf("%d ",j%2);
      }
    printf("\n");
  }
  getch();
}