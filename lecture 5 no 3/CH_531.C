#include<stdio.h>
#include<conio.h>
main()
{
 int a,b,c,n;
 clrscr();
 printf("enter 1 to set callertune:\n");
 printf("enter 2 for check balance recharge:\n");
 printf("enter 3 foe any other help:\n");
 printf("enter your choice:\n");
 scanf("%d",&n);
 clrscr();
 switch(n)
 {
  case 1:
    printf("press 1 for kesariya:\n");
    printf("press 2 for maan meri jaan:\n");
    printf("press 3 for namo namo shankra:\n");
    printf("enter your chioce:\n");
    scanf("%d",&a);
    clrscr();
  break;
  case 2:
    printf("press 1 for know your balance:\n");
    printf("press 2 for recharge:\n");
    printf("press 3 for new plan:\n");
    printf("enter your chioce:\n");
    scanf("%d",&b);
  break;
  case 3:
    printf("press 1 for debit card:\n");
    printf("press 2 for credit card:\n");
    printf("press 3 for check your bank balance:\n");
    printf("enter your chioce:\n");
    scanf("%d",&c);
  break;
  default:
      printf("Invalid chioce");
 }
 getch();
}
