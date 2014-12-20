#include <stdio.h>
#define MAX_SIZE 1001
int a[MAX_SIZE],idx[MAX_SIZE],max;
int get_array(int a[])
{
	int l;
	scanf("%d",&l);
	for (int i = 0;i<l;i++)
		scanf("%d",&a[i]);
	return l;
}

int max_value(int a[], int n)
{
	for (int i = 0;i<n;i++)
	{
		if(!i)
			max = a[0];
		else 
			if(a[i]>max) 
				max = a[i];
	}
	return max;
}
int max_index(int idx[], int a[], int n)
{
	int p=0;
	for (int i = 0;i<n;i++)
		if(a[i] == max_value(a,n))
		{
			idx[p] = i;
			p++;
		}
	return p;
}
void put_array(int a[], int n)
{
	for (int i=0;i<n;i++)
		if(!i)
			printf("%d",a[i]);
		else
			printf(",%d",a[i]);
	printf("\n");
}
int main()
{
	int array[MAX_SIZE], size;
	int index[MAX_SIZE], idx_size;

	size = get_array(array);
	idx_size = max_index(index, array, size);
	printf("maximum number is %d, ", max_value(array, size));
	printf("whose positions are:");
	put_array(index, idx_size);

	return 0;
}

