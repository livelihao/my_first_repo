#include <stdio.h>
#define MAX_SIZE 1001
int a[MAX_SIZE];
void get_array(int a[], int n)
{
	for (int i = 0;i<n;i++)
		scanf("%d",&a[i]);
}
int min_index(int a[], int n)
{
	int min;
	for (int i = 0;i<n;i++)
	{
		if(!i)
			min = a[0];
		else 
			if(a[i]<min) 
				min = a[i];
	}
	for (int i = 0;i<n;i++)
		if(a[i] == min )
			return i;
}
int main()
{
	int array[MAX_SIZE], size, index;

	scanf("%d", &size);
	get_array(array, size);
	index = min_index(array, size);
	printf("minimum number is %d, whose position is %d.", array[index], index);

	return 0;
}
