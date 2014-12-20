nclude <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
    int flag,le,i,j;
    char c[1001],d[1001];
    while (gets(c)!=NULL)
    {
        flag=1;
        le =strlen(c);
        j=0;
        for(i=0;i<le;i++)
        {
            if((c[i]<='9'&&c[i]>='0')||(c[i]>='A'&&c[i]<='Z')||(c[i]>='a'&&c[i]<='z'))
            {
                if(c[i]>='a'&&c[i]<='z')
                    c[i]=c[i]-32;
                d[j]=c[i];
                j++;
            }
 
        }
        d[j]='\0';
        //puts(d);
        for(i=0;i<j/2;i++)
        {
            if(d[i]!=d[j-1-i])
            {
                flag=0;
                break;
            }
 
        }
        if(flag)
            printf("Yes.\n");
        else
            printf("No.\n");
        memset(d,0,sizeof(d));
    }
    return 0;
}
