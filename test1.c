#include <stdio.h>
#include <string.h>
int main()
{
	char a[1010],b[1010];
	int q[1010]={0},w[1010]={0},s[2010]={0};
	int la,lb;
	int N,I,i,j,k,t;
	while (scanf("%s%s",a,b)!=EOF)
	{
		la = strlen(a);
		lb = strlen(b);
		for(i=0;i<la;i++)
			q[i]=a[i]-48;
		for(j=0;j<lb;j++)
			w[j]=b[j]-48;
		k=0;
		while(i>=0&&j>=0)
		{
			s[k]=q[i]+w[j];
			k++;
			i--;
			j--;
		}
		if(i>=0)
			while(i>=0)
			{
				s[k]=q[i];
				k++;
				i--;
			}
		else if(j>=0)
			while(j>=0)
			{
				s[k]=w[j];
				k++;
				j--;
			}
		for(t=1;t<k;t++)
			if(s[t]>=10)
			{
				s[t]%=10;
				s[t+1]++;
			}
		while(s[k]==0)
			k--;
		memset(s,0,sizeof(s));
		memset(w,0,sizeof(w));
		memset(q,0,sizeof(q));
	}
	return 0;
}

