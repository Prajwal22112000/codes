#include <stdio.h>
int main(void)
{
int i;
char str[80], str2[80];
scanf("%d%*c %s%s", &i, str, str2);
printf("%d %s %s", i, str, str2);
return 0;
}