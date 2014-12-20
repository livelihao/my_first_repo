#include <stdio.h>
int is_primer(int n)
{
	unsigned int i,p=0;
	if(n<4 && n>1) return 1;
	if(n==1) return 0;
	for(i=2;i*i<=n;i++)
	{
		if(n%i == 0)  p++;
	}
	if(p)
		return 0;
	else 	
		return 1;
}

int main()
{
	int m,n,te=0;
	int t[500010]={0};
	while (scanf("%d%d",&m,&n))
	{
		if(te)
			printf("\n");
		for(int i=m;i<=n;i++)	
		{
			if(t[i]==-1)
				continue;
			if(is_primer(i))
			{
				int d;
				for(d=i+1;d<=n;d++)
					if(d%i == 0)
						t[d] = -1;
				t[i] = 1;
			}
		}
		int p=0;
		for(int i=m;i<=n;i++)
			if(t[i] == 1)
			{
				printf("%d\n",i);
				p++;
			}
		if(p == 0)
			printf("\n");
		te++;
	}
	return 0;
}
