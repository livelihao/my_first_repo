#include <stdio.h>
#define MAX_SIZE 1001
int a[1001];
int get_array(int a[])
{
	int l;
	scanf("%d",&l);
		for (int i=0;i<l;i++)
			scanf("%d",&a[i]);
	return l;
}
void reverse_array(int a[], int n)
{
	int temp;
	for (int i =0;i<n/2;i++)
	{
		temp = a[i];
		a[i] = a[n-1-i];
		a[n-1-i] = temp;
	}
}
void put_array(int a[], int n)
{
	for (int i = 0;i<n;i++)
		if(!i)
			printf("%d",a[i]);
		else
			printf(" %d",a[i]);
	printf("\n");
}
int main()
{
	int cases, i;
	int array[MAX_SIZE], size;
	scanf("%d", &cases);
	for(i = 1; i <= cases; i++)
	{
		size = get_array(array);
		reverse_array(array, size);
		printf("case %d:", i);
		put_array(array, size);
	}
	return 0;
}
