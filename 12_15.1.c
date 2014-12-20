#include <stdio.h>
#define MAX_STR_LEN 11
int strToInt(char ch[11])
{
    int i=0,flag=-1,weishu=0,cheng=1;
 
    for(i=0;i<11;i++)
    {
        if(ch[i]=='\0')
            break;
 
        if(ch[i]<='9'&&ch[i]>='0')
            weishu++;
        else
        {
            flag=0;
            break;
        }
 
 
    }
    if(weishu!=0)
    {
        flag=0;
        for(i=weishu-1;i>=0;i--)
        {
           flag +=(ch[i]-'0')*cheng;
           cheng *=10;
        }
    }
 
    return flag;
}
 
int main()
{
    char s[MAX_STR_LEN];
    while(gets(s) != NULL)
        printf("%d\n", strToInt(s));
    return 0;
}
