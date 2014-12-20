#include <stdio.h>
int a[200010],d[200010];
int aver(int b[],int n)
{
	int j,p=0;
	double sum=0,av;
	for (j=0;j<n;j++)
		sum += b[j];
	av=sum/n;
	for (j=0;j<n;j++)
	if(b[j]==av)
		d[p++]=j+1;
	return p;
}
int main ()
{
	int n,t,m;
	scanf("%d",&n);
	for (int i= 1;i<=n;i++)
	{
		scanf("%d",&t);
		for (int i = 0;i<t;i++)
			scanf("%d",&a[i]);
		m = aver(a,t);
		if(m==0)
			printf("0\n");
		else
		{
			printf("%d\n",m);
			for(int i = 0;i<m;i++)
				if(!i)
					printf("%d",d[i]);
				else
					printf(" %d",d[i]);
			printf("\n");
		}
	}
	return 0;
}
