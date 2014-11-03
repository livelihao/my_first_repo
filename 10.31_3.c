#include <stdio.h>
int put_int_sum(int x,int y)
{
  if(x+y == 0)
	  return x+y;
  else
  {
	  printf("%d\n",x+y);
	  return x+y;
  }
}
int main()
{
    int a, b;
    while(scanf("%d%d", &a, &b))
        if(put_int_sum(a, b) == 0)
            break;
    return 0;
}
