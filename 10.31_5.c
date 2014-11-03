#include<stdio.h>
int is_vocals(char c)
{
  if(c=='A'||c=='E'||c=='I'||c=='O'||c=='U'||c=='a'||c=='e'||c=='i'||c=='o'||c=='u')
	return 1;
  else 
	return 0;
}
int main()
{
    char ch;
    scanf("%c", &ch);
    printf("%s",
            ( is_vocals(ch) ? "It is a vocals."
                            : "It is not a vocals." )
          );
    return 0;
}
