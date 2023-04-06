/* 5 4 3 2 1
     5 4 3 2
       5 4 3
	 5 4
	   5
*/
#include <stdio.h>
#include<conio.h>
main()
{
    int i,j,s;
    clrscr();
     for(i=1;i<=5;i++)
     {
	for(s=1;s<=i;s++)
	{
	 printf("  ");
	}
	for(j=5;j>=i;j--)
	{
	 printf("%d ",j);
	}
	printf("\n");
     }
    getch();
}