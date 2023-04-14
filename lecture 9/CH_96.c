#include<stdio.h>
main()
{
	char t[6];
	int i;
	printf("Enter Your Name :");
	scanf("%s",&t);
	for(i=0;i<=6;i++)
	{
	     if(t[i]>=65 && t[i]<=90)
	     {
	     	t[i]=t[i]+32;
		 }
	     else if(t[i]>=97 && t[i]<=122)
	     {
	     	t[i]=t[i]-32;
		 }
	}
	printf("toggle name is :%s",t);  
}
