#include <stdio.h>
int main()
{
	int a,b;
	scanf("%d:%d",&a,&b);
	if(a == 0)
		printf("12:%.2d a.m.\n",b);
	else if(a>=13&&a<=23)
		printf("%.2d:%.2d p.m.\n",a-12,b);
	else 
		printf("%.2d:%.2d a.m.\n",a,b);
	return 0;
}
