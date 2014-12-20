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
int main ()
{
	int m,n,t=0;
	while (scanf("%d%d",&m,&n)!=EOF)
	{
		if(t)
			printf("\n");
		int p=0;
		for(int i=m;i<=n;i++)
			if(is_primer(i))
			{
				printf("%d\n",i);
				p++;
			}
		if(!p) printf("\n");
		t = 1;
	}
	return 0;
}
