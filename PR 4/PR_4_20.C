/*       * 
       *   *
     *       *
   *           *
*/
#include<stdio.h>
main()
{
    int i;
    for(i=1;i<=4;i++)
    {
	  if(i==1)
	  {
	    printf("     *");
	   } 
	 if(i==2)
	  {
	    printf("   *   *");
	  }
	 if(i==3)
	  {
	 	printf("  *     * ");
	  }
	  if(i==4)
	  {
	 	printf(" *       * ");
	  }
	printf("\n");
    }
}
