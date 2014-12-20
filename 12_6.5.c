#include <stdio.h>
#define MAX_SIZE 1001

void getarray(int a[])
{
	int i=0;
	do{
		scanf("%d",&a[i++]);
	}while(a[i-1]);
}

int insert(int a[], int key, int vol)
{
	int l,p=1111;
	for(l=0;l<=vol;l++)
	{
		if(a[0]>key)
		{p = 0;break;}
		if(a[l]>key&&a[l-1]<key)
		{p = l+1;break;} 
		if(a[l]==0&&a[l-1]<key)
		{p = l;break;}
		if(a[l]==key)
		{p = -1;break;}
		if(a[l]==0)
			break;
	}
	if(l == 1000)
		return 1111;
	return p;	
}

void result(int q)
{
	if(q == 1111)
		printf("The array if full!\n");
	else if(q<0)
		printf("The key is already in this array!\n");
	else
		printf("The key is inserted in position %d.\n",q);
}
int main()
{
	int array[MAX_SIZE], cases, i, key;
	scanf("%d", &cases);
	for(i = 1; i <= cases; i++)
	{
		getarray(array);
		scanf("%d", &key);
		result(insert(array, key, MAX_SIZE - 1));
	}
	return 0;
}
