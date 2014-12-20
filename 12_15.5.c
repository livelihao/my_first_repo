nclude <stdio.h>
 
int main()
{
    int N,i,j,k,m,n;
    int shu[101][101];
    scanf("%d",&N);
    for(i=1;i<=N;i++)
    {
        scanf("%d%d",&m,&n);
        for(j=0;j<m;j++)
            for(k=0;k<n;k++)
                scanf("%d",&shu[j][k]);
        if(i==1)
        for(k=0;k<n;k++)
        {
            for(j=0;j<m;j++)
            {
                if(j==0)
                printf("%d",shu[j][k]);
                else
                printf(" %d",shu[j][k]);
            }
            printf("\n");
        }
        else
        {
            printf("\n");
             for(k=0;k<n;k++)
            {
                for(j=0;j<m;j++)
                {
                    if(j==0)
                    printf("%d",shu[j][k]);
                    else
                    printf(" %d",shu[j][k]);
                }
                printf("\n");
            }
        }
 
    }
    return 0;
}
