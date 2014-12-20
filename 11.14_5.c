#include <stdio.h>
#include <string.h>
#include <math.h>
int main ()
{
	char a[33];
	int b[33];
	unsigned int l,n=0;
	memset(a,0,sizeof(a));
	memset(b,0,sizeof(b));
	while(scanf("%s",a)!=EOF)
	{
		l = strlen(a);
		for (int i= l-1;i>=0;i--)
		{
			b[i] = a[i]-'0';
			n += b[i]*pow(2,l-i-1);
		}
		printf("%u\n",n);
		n = 0;
	}
	return 0;
}

