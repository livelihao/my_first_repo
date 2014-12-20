#include <stdio.h>
#define MAX_SIZE 1001
int t=0,num=0;
 
void getarray(int a[])
{
    int i=0;
    t=0;
    num =0;
    do{
        scanf("%d",&a[i++]);
    }while(a[i-1]);
}
int getkey(int key[])
{
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
        scanf("%d",&key[i]);
    return n;
}
int insert(int a[], int key, int vol)
{
    int l,i,j,p;
    for(l=0;l<=vol;l++)
    {
    if(a[0]>key)
        p = 0;
    if(a[l]==0&&a[l-1]<key)
        p = l;
    if(a[l]>key&&a[l-1]<key)
        p = l;
    if(a[l]==key)
        p = -2;
    if(a[l]==0)
        break;
    }
    if(p>=0)
    {
	    for(i=l+1;i>p;i--)
		    a[i]=a[i-1];
	    a[p]=key;
    } 
   if(l >= 1000)
        return -1;
    return p; 
}
void result(int q)
{
    if(q == -1)
        printf("The array if full!\n");
    else if(q== -2)
        printf("The key is already in this array!\n");
    else
    {
        printf("The key is inserted in position %d.\n",q);
    }
}
 
int main()
{
    int array[MAX_SIZE], cases, ca, i, key[MAX_SIZE], size;
    scanf("%d", &cases);
    for(ca = 1; ca <= cases; ca++)
    {
        getarray(array);
        size = getkey(key);
        printf("Case %d:\n", ca);
        for(i = 0; i < size; i++)
            result(insert(array, key[i], MAX_SIZE - 1));
    }
    return 0;
}
