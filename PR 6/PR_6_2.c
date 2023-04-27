#include<stdio.h>
main()
{
    char str[20];
    int i,len,count=0;
    printf("Enter a string:");
    scanf("%s", str);
    len=strlen(str);
    for(i=0;i<len;i++)
	  {  
        if(str[i]!= str[len-i-1])
		    {
            count=1;
        }
    }
    
    if (count)
	  {
        printf("%s is not a palindrome", str);
    }    
    else 
	  {
        printf("%s is a palindrome", str);
    }
}
