/* 5 4 3 2 1
     4 3 2 1
       3 2 1
	     2 1
	       1
*/
#include <stdio.h>
main()
{
    int i,j,s;
    for(i=0;i<=5;i++)
    {
      for(j=0;j<=i;j++)
      {
	 printf("  ");
      }
      for(s= 5-i;s>=1;s--)
	{
	    printf("%d ", s);
	}
    printf("\n");
    }
}

