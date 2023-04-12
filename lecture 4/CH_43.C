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
     printf("%d",(x*x*x)+(3*x*x*y)+(3*x*y*y)+(y*y*y));
     getch();
}
