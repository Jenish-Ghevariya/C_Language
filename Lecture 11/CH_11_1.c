#include<stdio.h>
  void main()
  {
  	int a, square=0;
  	int *j;
  	printf("Enter the value of a:");
  	scanf("%d",&a);
  	j=&a;
  	printf("square value of a: %d",square=(*j)*(*j));
  }
