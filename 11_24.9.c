#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char ch1[100],ch2[100];
    while(scanf("%s %s",ch1,ch2) != EOF)
    {

        int l1 = strlen(ch1);
        int l2 = strlen(ch2);
        int i,j,t = 0,q = 0;
        int p = 0,n1 = 1,n2 = 1;
        for(i = l1-1,j = l2 - 1;;i--,j--)
        {
            if(i >= 0)
                p += ch1[i] - '0';
            else
                n1 = 0;

            if(j >= 0)
                p += ch2[j] - '0';
            else
                n2 = 0;

            if(p + q >= 10)
                {q = 1;t++;}
            else
                q = 0;
            p = 0;

            if(n1 == 0 && n2 == 0)
                break;
        }
        printf("%d\n",t);


    }

    return 0;
}

