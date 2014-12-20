#include <stdio.h>
 
void mofangzhen(int m)
{
    int a[100][100];
    int b,x,y;
    for(x=0;x<m;x++)
    {
        for(y=0;y<m;y++)
        a[x][y]=0;
    }
    x=0;
    y=(m-1)/2;
    a[x][y]=1;
    for(b=2;b<=m*m;b++)
    {
        if(x-1<0)
            x=(x-1+m)%m;
        else
            x=x-1;
        if(y-1<0)
            y=(y-1+m)%m;
            else
            y=y-1;
        if(a[x][y]!=0)
 
            {
            x=(x+2)%m;
                y=(y+1)%m;
        }
        a[x][y]=b;
    }
    for(x=0;x<m;x++)
    {
        for(y=m-1;y>=0;y--)
             {
                 if(y==m-1)
                    printf("%d",a[x][y]);
                else
                    printf(" %d",a[x][y]);
             }
 
         printf("\n");
    }
  }
  int main ()
  {
      int a,i=0;
      while(scanf("%d",&a)!=EOF)
      {
        if(i==1)
            printf("\n");
          mofangzhen(a);
 
          i=1;
      }
 
      return 0;
  }
