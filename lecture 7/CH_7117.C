// 1
// 1 0
// 1 0 1
// 1 0 1 0
// 1 0 1 0 1
#include<stdio.h>
#include<conio.h>
main()
{
  int i,j,n=5;
  clrscr();
  for(i=1;i<=n;i++)
  {
    for(j=1;j<=i;j++)
      {
	if(j%2==0)
	{
	  printf("0 ");
	}
      else
	{
	  printf("1 ");
	}
      }
    printf("\n");
  }
  getch();
}