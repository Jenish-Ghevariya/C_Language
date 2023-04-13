#include<stdio.h>
main()
{
  int i,a[i],b[i],c[i],n;
  printf(" Enter the array:");
  scanf("%d",&n);
  printf("Enter the first array:");
  for(i=0;i<=n;i++)
  {
     scanf("%d",&a[i]);
  }
  printf("First array..");
  for(i=0;i<n;i++)
  {
     printf("%d",a[i]);
     c[i]=a[i];
  }
  printf("Second array..");
  for(i=0;i<n;i++)
  {
     scanf("%d",&b[i]);
  }
  printf("second array..");
  for(i=0;i<n;i++)
  {
     printf("%d",b[i]);
     c[n*2]=b[i];
  }
  printf("Third array is the %d",c[i]);
}




















