#include<stdio.h>
int is_daffodil(int n)
{
  if(n<100||n>999)
	  return 0;
  else
  {
	  if((n/100)*(n/100)*(n/100)+(n%100/10)*(n%100/10)*(n%100/10)+(n%10)*(n%10)*(n%10) == n)
		return 1;
	else 
		return 0;
  }
}
int main()
{
    int n;
    scanf("%d", &n);
    printf("%s",
           ( is_daffodil(n) ? "Yes, it is a daffodil."
                            : "No, it is not a daffodil." )
          );
    return 0;
}
