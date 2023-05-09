#include<stdio.h>
  void main()
  {
  	int a,b;
  	int *j;
  	int *h;
  	printf("Enter the value of a:");
  	scanf("%d",&a);
  	printf("Enter the value of b:");
  	scanf("%d",&b);
  	a=a+b;
  	b=a-b;
  	a=a-b;
  	j=&a;
  	h=&b;
  	printf("a=%d\n",*j);
  	printf("b=%d\n",*h);
  }
