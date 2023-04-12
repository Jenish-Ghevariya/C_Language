/*
     *     *
      *   *
       * *
	*
	*
	*
	*

*/
#include<stdio.h>
#include<conio.h>
main()
{
   int i;
   clrscr();
   for(i=1;i<=7;i++)
   {
      if(i==4 || i==5 || i==6 || i==7)
      {
	 printf("\n    *   ");
      }
      if(i==1)
      {
	 printf("\n *     *");
      }
      if(i==2)
      {
	 printf("\n  *   *");
      }
      if(i==3)
      {
	 printf("\n   * *");
      }
   }
   getch();

}