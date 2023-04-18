/* 1
   2 1
   3 2 1 
   4 3 2 1 
   5 4 3 2 1 
   4 3 2 1
   3 2 1 
   2 1
   1
*/
#include<stdio.h>
main()
{
    int i,j,s;
    for(i=1;i<=5;i++)
    {
	   for(j=i;j>=1;j--)
	   {
	      printf("%d ",j);
	   }
       printf("\n");
    }
    for(i=4;i>=1;i--)
    {
	   for(j=i;j>=1;j--)
	   {
	      printf("%d ",j);
	   }
       printf("\n");
    }
}
