#include <stdio.h>
int main()
{
	int a,b,c,d,e;
	char ch1,ch2;
	int i;
	scanf("%d %c %c %d %d",&a,&ch1,&ch2,&b,&c);
	d =ch1-64;e=ch2-64; 
	for (int i=1;i<=c;i++)
		printf("%.4d%.2d%.2d%.2d%.2d\n",a,d,e,b,i);
	return 0;
}
