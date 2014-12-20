#include <stdio.h>
#include <string.h>
#define MAX_SIZE 1010

void init_seq(int a[],int n)
{
	for(int i=0;i<n;i++)
		a[i]=0;
}
int get_seq(int seq[])
{
	int n;
	scanf("%d",&n);
	for(int i=0;i<n;i++)
		scanf("%d",&seq[i]);
	return n;
}
int max(int a,int b)
{
	return a>b?a:b;
}
void add_seq(int sum[],int add[],int max)
{
	for(int i=0;i<max;i++)
		sum[i] = sum [i]+add[i];
}
void put_seq(int sum[],int max)
{
	for(int i=0;i<max;i++)
	{
		if(!i)
			printf("%d",sum[i]);
		else 
			printf(" %d",sum[i]);
	}
	printf("\n");
}
int main()
{
    int  odd_seq[MAX_SIZE],  odd_size;
    int even_seq[MAX_SIZE], even_size;
    int m, i, put_size;
 
    scanf("%d", &m);
    init_seq(odd_seq, MAX_SIZE);
    odd_size = get_seq(odd_seq);
    for(i = 2; i <= m; i++)
    {
        if(i % 2 == 0)
        {
            init_seq(even_seq, MAX_SIZE);
            even_size = get_seq(even_seq);
            put_size = max(odd_size, even_size);
            add_seq(odd_seq, even_seq, put_size);
            put_seq(odd_seq, put_size);
        }
        else
        {
            init_seq(odd_seq, MAX_SIZE);
            odd_size = get_seq(odd_seq);
            put_size = max(odd_size, even_size);
            add_seq(even_seq, odd_seq, put_size);
            put_seq(even_seq, put_size);
        }
    }
    if(m % 2 == 0)
        put_seq(even_seq, even_size);
    else
        put_seq(odd_seq, odd_size);
    return 0;
}
