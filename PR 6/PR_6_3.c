#include <stdio.h>
main()
{
    char str[100];
    int i,j;								
    printf("Enter String : ");
    gets(str);
    int len=strlen(str);
    printf("Before = %s\n",str);
    for(i=0;i<len;i++)
    {
        if(str[i]==' ' || str[i]=='\t')
        {
             for(j=i;j<len;j++)
             {
                str[j]=str[j+1];
             }
        }
    }
    printf("After = %s\n",str);
}
