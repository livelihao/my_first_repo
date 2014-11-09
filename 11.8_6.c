#include <stdio.h>
int print_graphic(int n,char c)
{
	int i,j;
	for (i=1;i<=n;i++)
	{
		for (j=1;j<=n-i;j++) 
			printf(" ");
		for (j=1;j<=2*i-1;j++)
			printf("%c",c);
		printf("\n");
	}
	return 0;
}
int main()
{
    char c;
    int num;
    scanf("%d %c", &num, &c);
    print_graphic(num, c);
    return 0;
}
