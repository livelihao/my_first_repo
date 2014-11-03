#include<stdio.h>
int maxValue(int a,int b,int c)
{
	int max;
	if(a>=b)
 		max=a;
	else
		max=b;		
	if(max<=c)
		max=c;
	return max;
}
int main()
{
    int x, y, z;
    scanf("%d %d %d", &x, &y, &z);
    printf("%d", maxValue(x, y, z));
    return 0;
}
