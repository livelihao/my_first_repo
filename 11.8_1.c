#include <stdio.h>
int is_leap_year(int n)
{
	if((n%4==0&&n%100!=0)||n%400==0)
		return 1;
	else
		return 0;
}
int main()
{
	int year;

	scanf("%d", &year);
	is_leap_year(year) ? printf("Yes") : printf("No");

	return 0;
}
