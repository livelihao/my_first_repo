#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char a[10010];
int len;

int chuli(char a[10010],int k)
{
	int l,isum=0;
	for(l=0;l<=len-1;l++)
	{
		if((a[l]>='A'&&a[l]<='Z')||(a[l]>='a'&&a[l]<='z'))
		{
			if(a[l]>='a'&&a[l]<='z')
				a[l]=a[l]-'a'+'A';
			if(a[l]+k>'Z')
				a[l]=a[l]+k-'Z'+'A'-1;
			else if(a[l]+k<'A')
				a[l]=a[l]+k+'Z'-'A'+1;
			else
				a[l]=a[l]+k;
			isum++;
		}
	}
	return isum;
}
int main()
{
	int i,j,k,l,n,N;
	int sum;
	scanf("%d",&N);
	for(i=1;i<=N;i++)
	{
		if(i!=1)
			printf("\n");
		scanf("%d%d",&n,&k);
		getchar();
		for(j=1;j<=n;j++)
		{
			sum=0;
			memset(a,0,sizeof(a));
			gets(a);
			len = strlen(a);
			sum = chuli(a,k);
			printf("%d ",sum);
			for(l=0;l<=len-1;l++)
				if(a[l]>='A'&&a[l]<='Z')
					printf("%c",a[l]);
			printf("\n");
		}
	}
	return 0;
}
