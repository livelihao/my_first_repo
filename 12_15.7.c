nclude <stdio.h>
#include <stdlib.h>
#include <string.h>
void cheng(int a[102][102],int b[102][102],int c[102][102],int m1,int m,int n)
{
    int sum,i,j,k;
    for(i=1;i<=m1;i++)
        for(j=1;j<=n;j++)
        {
            sum=0;
            for(k=1;k<=m;k++)
                sum+=a[i][k]*b[k][j];
            c[i][j]=sum;
        }
 
}
void putshu(int a[102][102],int c[102][102],int m1,int n1)
{
    int i,j;
    for(i=1;i<=m1;i++)
    {
        for(j=1;j<=n1;j++)
        {
            if(j!=n1)
                printf("%d ",c[i][j]);
            else
                printf("%d",c[i][j]);
            a[i][j]=c[i][j];
        }
        printf("\n");
    }
}
void getshu(int ab[102][102],int m,int n)
{
    int i,j;
    for(i=1;i<=m;i++)
        for(j=1;j<=n;j++)
        scanf("%d",&ab[i][j]);
}
int main()
{
    int m,n,m1,m2,n1,n2;
    int i,j,k;
    int a[102][102]={0},b[102][102]={0},c[102][102]={0};
    int flag=0;
    scanf("%d%d",&m,&n);
    getshu(a,m,n);
    m1=m;n1=n;
    while(scanf("%d%d",&m,&n)!=EOF)
        {
            if(m==0&&n==0)
                break;
            getshu(b,m,n);
            if(n1==m)
            {
                cheng(a,b,c,m1,m,n);
                n1=n;m1=m1;
                memset(a,0,sizeof(a));
                memset(b,0,sizeof(b));
                if(flag!=0)
                    printf("\n");
                flag=1;
                putshu(a,c,m1,n1);
                memset(c,0,sizeof(c));
            }
            else
            {
                if(flag!=0)
                    printf("\n");
                flag=1;
                printf("Not satisfied the definition of matrix multiplication!\n");
                memset(a,0,sizeof(a));
                for(i=1;i<=m;i++)
                    for(j=1;j<=n;j++)
                    a[i][j]=b[i][j];
                memset(b,0,sizeof(b));
                memset(c,0,sizeof(c));
                m1=m;n1=n;
            }
    }
    return 0;
}
