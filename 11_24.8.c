#include <stdio.h>
int su[500010],s[500010];
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
int main ()
{
	int m,t,n,p=0,q=1;
	while(scanf("%d%d",&m,&n)!=EOF)
	{
		if(m>n)
		{
			t = m;
			m = n;
			n = t;
		}
		if(s[m]==0||s[n]==0)
		{
			for(int i=m;i<=n;i++)
			{
				su[i] = i;
				s[i] = 1;
			}
			for(int i=m;i<=n;i++)
			{
				if(!is_primer(su[i]))
					su[i] = 0;
				else
					q = 0;
			}
		}
		if(q)
			printf("\n");
		if(p)
			printf("\n");
		for(int i=m;i<=n;i++)	
			if(su[i])
				printf("%d\n",su[i]);
		p++;q=1;
	}
	return 0;
}
