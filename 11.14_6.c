#include <stdio.h>
#include <string.h>
int main ()
{
	char c[101];
	int a[101];
	int n,i,l,s=0;
	scanf("%d",&n);
	for (i=1;i<=n;i++)
	{
		scanf("%s",c);
		l = strlen(c);
		for (int j=0;j<l;j++ )
		{
			a[j] = c[j]-'0';
			s += a[j];
		}
		if(s%3==0)
			printf("Yes\n");
		else
			printf("No\n");
		s = 0; 
	}
	return 0;
}
