#include <stdio.h>
int main ()
{
	int a;
	while(scanf("%d",&a)!=EOF)
	if(a == 0)
		return 0;
	else 
	switch(a%10)
	{
		case 1 :printf("%dst\n",a);break;
		case 2 :printf("%dnd\n",a);break;
		case 3 :printf("%drd\n",a);break;
		default :printf("%dth\n",a);break;
	}
	return 0;
}
