#include <stdio.h>
main()
{
    char s[100];
    int i;
    printf("Enter a string: ");
    scanf("%d",&s);
    s[0] =(s[0]);

    for(i=1;i<s;i++) 
	{
        if((s[i-1]))
		{
            s[i]=(s[i]);
        } else 
		{
            s[i]=(s[i]);
        }
    }
    printf("Titlecase string: %s", s);
}

