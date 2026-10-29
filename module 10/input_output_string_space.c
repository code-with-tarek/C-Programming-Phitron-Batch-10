#include<stdio.h>
int main()
{
    char s[40];
    fgets(s,25,stdin);
    printf("%s",s);
    return 0;
}