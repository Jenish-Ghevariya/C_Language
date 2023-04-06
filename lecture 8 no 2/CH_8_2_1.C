/* 1 0 1 0 1
     0 1 0 1
       1 0 1
	 0 1
	   1
*/
#include<stdio.h>
#include<conio.h>
main()
{
  int i,j,s;
  clrscr();
  for(i=1;i<=5;i++)
  {
    for(s=1;s<i;s++)
      {
	printf("  ");
      }
    for(j=i;j<=5;j++)
    {
      if((i+j)%2==0)
      {
	printf("1 ");
      }
      else
      {
	printf("0 ");
      }
    }
   pri	ntf("\n");
  }
  getch();
}
