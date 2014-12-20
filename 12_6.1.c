#include <stdio.h>

void swap(int *x,int *y)
{
	int temp;
	temp = *x;
	*x = *y;
	*y = temp;
}
void compare(int * a,int *b,int *c)
{
	if(*a > *b)
		swap (a,b);
	if(*a > *c)
		swap (a,c);
	if(*b > *c)
		swap (b,c);
}
int main()
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    compare(&a, &b, &c);
    printf("%d %d %d", a, b, c);
    return 0;
}
