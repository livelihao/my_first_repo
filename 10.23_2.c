#include <stdio.h>
int main()
{
  char ch1,ch2;
  double low,high,i;
  double step;
  scanf("%c->%c",&ch1,&ch2);
  scanf("%lf%lf%lf",&low,&high,&step);
  if(ch1 == 'C')
  {
	  printf("   C  ->    F\n");
	  for (i=low;i<=high+0.01;i=i+step)
	  {
		  printf("%5.1lf ->%6.1lf\n",i,(i*9/5+32));
	  }
  }
  else
  {
	  printf("   F  ->    C\n");
	  for (i=low;i<=high+0.01;i=i+step)
	  {
		  printf("%5.1lf ->%6.1lf\n",i,(i-32)*5/9);
	  }
  }
  return 0;
}
