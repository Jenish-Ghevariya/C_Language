
/*     *     *
       *     *
       *     *
       *     *
       *     *
       *     *
	* * *
*/
#include<stdio.h>
#include<conio.h>
main()
{
  int i;
  clrscr();
  for(i=1;i<8;i++)
  {
    if(i==1 || i==2 || i==3 || i==4 || i==5 || i==6)
    {
      printf("\n  *     *");
    }
     if(i==7)
    {
      printf("\n   * * *");
    }
  }
 getch();
}
