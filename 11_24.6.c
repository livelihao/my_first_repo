#include <stdio.h>
#define MAX_STR_LEN 101
int str_cmp(char s1[], char s2[])
{
	int i,d=0,l1,l2,l=0;
	for (i=0;s1[i]!='\0';i++) 
	//{
		l++;
	/*	if(s1[i]>='A'&&s1[i]<='Z')
			s1[i] = s1[i]-'A'+'a';
	}*/
	l1 = l;
	l = 0;
	for (i=0;s2[i]!='\0';i++) 
	//{
		l++;
	/*	if(s2[i]>='A'&&s2[i]<='Z')
			s2[i] = s2[i]-'A'+'a';
	}*/
	l2 = l;
	l = 0;
	l = l1>l2? l1:l2;
	for (i = 0;i<l;i++)
		if(s1[i]!=s2[i]&&s1[i]!=s2[i]+'A'-'a'&&s2[i]!=s1[i]+'A'-'a')
		{
			d = s1[i]-s2[i];
			break;
		}
	return d;
}
int main()
{
	char str1[MAX_STR_LEN], str2[MAX_STR_LEN];
	while( (gets(str1) != NULL) && (gets(str2) != NULL) )
		printf("%d\n", str_cmp(str1, str2));
	return 0;
}
