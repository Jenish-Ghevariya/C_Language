#include<stdio.h>

int main()

{

	char str[100];
  char *p=str;
	int count=0;	

	printf("Enter the string:\n");
  gets(str);	
  while(*p!=NULL)

	{

		count++;
		p++;
	}	
  printf("Length of string= %d",count);
}


