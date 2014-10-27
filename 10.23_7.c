#include <stdio.h>
int main()
{
int i=1,j;
unsigned int s=0,b=1,a;
scanf("%d",&j);
for(;i<=j;i++)
{ 
	a=b;
	b=b*i;
	if((double)b/a<i)
	{
		printf("overflow\n");
		return 0;
	}
	s=s+b;
}
printf("%u\n",s);
return 0;
}
