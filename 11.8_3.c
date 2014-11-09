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
int main()
{
    int num;
    while(scanf("%d", &num) != EOF)
    {
        if(is_primer(num))
            puts("YES");
        else
            puts("NO");
    }
    return 0;
}
