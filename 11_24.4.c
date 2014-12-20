#include <stdio.h>
#define MAX_SIZE 100
int a[MAX_SIZE];
int get_array(int a[])
{
	int i = 0;
	while (scanf("%d",&a[i])!=EOF)
		i++;
	return i;
}
void sort_array(int a[], int n)
{
	int temp;
	for (int j=1;j<=n-1;j++)
		for(int i=0;i<n-j;i++)
			if(a[i]>a[i+1])
			{
				temp = a[i];
				a[i] = a[i+1];
				a[i+1] = temp;
			}
}
void put_array(int a[], int n)
{
	for (int i=0;i<n;i++)
		if(!i)
			printf("%d",a[i]);
		else 
			printf(" %d",a[i]);
	printf("\n");
}
int main()
{
	int array[MAX_SIZE], size;

	size = get_array(array);
	sort_array(array, size);
	put_array(array, size);

	return 0;
}
