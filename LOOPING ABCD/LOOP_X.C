/*     *         *
	*       *
	  *   *
	    *
	  *   *
	*	*
       *	 *

*/
#include<stdio.h>
#include<conio.h>
main()
{
  int i;
  clrscr();
  for(i=1;i<8;i++)
  {
    if(i==1 || i==7)
    {
      printf("\n *         *");
    }
     if(i==2 || i==6)
    {
      printf("\n  *       *");
    }
     if(i==3 || i==5)
    {
      printf("\n    *   *");
    }
     if(i==4)
    {
      printf("\n      *    ");
    }
  }
 getch();
}