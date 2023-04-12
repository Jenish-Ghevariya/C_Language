#include<stdio.h>
#include<conio.h>

main()
{
      int a,b,c;
      clrscr();
      printf("enter the value of a:");
      scanf("%d",&a);
      printf("enter the value of b:");
      scanf("%d",&b);
      c=a;
      a=b;
      b=c;
      printf("after swapping, a:%d\n",a);
      printf("after swapping, b:%d\n",b);
      printf("the sum of a and b is :%d",a+b);
      getch();
}