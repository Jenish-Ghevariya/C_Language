#include<stdio.h>
#include<conio.h>
main()
{
     int x,y;
     clrscr();
     printf("enter the valur of x:");
     scanf("%d",&x);
     printf("enter the value of y:");
     scanf("%d",&y);
     printf("%d",(x*x)-(2*x*y)+(y*y));
     getch();
}
