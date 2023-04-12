/*   * * *
   *       *
   *       *
   *       *
   *    *  *
   *      *
     * * *  *
*/
#include<stdio.h>
#include<conio.h>
main()
{
   int i;
   clrscr();
   for(i=1;i<=7;i++)
   {
    if(i==1)
    {
     printf("     * * *");
    }
    if(i==2 || i==3 || i==4)
    {
     printf("   *       *");
    }
    if(i==5)
    {
     printf("   *    *  *");
    }
    if(i==6)
    {
     printf("   *      *");
    }
    if(i==7)
    {
     printf("     * * *  *");
    }
  printf("\n");
  }
  getch();
}


