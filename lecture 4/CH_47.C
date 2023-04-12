#include<stdio.h>
#include<conio.h>
main()
{
     int x,y,z;
     clrscr();
     printf("enter the valur of x:");
     scanf("%d",&x);
     printf("enter the value of y:");
     scanf("%d",&y);
     printf("enter the value of z:");
     scanf("%d",&z);
     printf("%d",(x*x)+(2*x*y)+(2*x*z)+(y*y)+(2*y*z)+(z*z));
     getch();
}
