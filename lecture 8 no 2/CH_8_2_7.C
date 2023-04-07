/* 1 2 3 4 5
     2 3 4 5
       3 4 5
         4 5
           5 
*/
#include<stdio.h>
#include<stdio.h>
main()
{
  int i,j,s;
  clrscr();
    for(i=1;i<=5;i++)
     {
       for(j=1;j<i;j++)
	{
	   printf("  ");
	}
	for(s=i;s<=5;s++)
	{
	   printf("%d ", s);
	}
  printf("\n");
    }
  getch();
}

