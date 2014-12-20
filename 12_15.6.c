nclude <stdio.h>
#include <stdlib.h>
#include <string.h>
 
int main()
{
    int count=0,i,j,m1,n1,m2,n2;
    int a[101][101],b[101][101];
    while (scanf("%d%d",&m2,&n2)!=EOF)
    {
        if(m2==0&&n2==0)
            break;
        count ++;
        if(count%2==1)
        {
            m1=m2;n1=n2;
        }
        if(count%2==1)
        for(i=0;i<m2;i++)
            for(j=0;j<n2;j++)
                scanf("%d",&a[i][j]);
        else
        for(i=0;i<m2;i++)
            for(j=0;j<n2;j++)
                scanf("%d",&b[i][j]);
        if(count%2==0)
        {
            if(count==2)
            {
                if(m1==m2&&n1==n2)
                for(i=0;i<m2;i++)
                {
                     for(j=0;j<n2;j++)
                     {
                         if(j==0)
                            printf("%d",a[i][j]+b[i][j]);
                         else
                            printf(" %d",a[i][j]+b[i][j]);
                     }
                     printf("\n");
                }
                else
                    printf("Not satisfied the definition of matrix addition!\n");
            }
            else
            {
                printf("\n");
                if(m1==m2&&n1==n2)
                for(i=0;i<m2;i++)
                {
                     for(j=0;j<n2;j++)
                     {
                         if(j==0)
                            printf("%d",a[i][j]+b[i][j]);
                         else
                            printf(" %d",a[i][j]+b[i][j]);
                     }
                     printf("\n");
                }
                else
                    printf("Not satisfied the definition of matrix addition!\n");
            }
         memset(a,0,sizeof(a));
         memset(b,0,sizeof(b));
        }
 
 
 
    }
    return 0;
}
