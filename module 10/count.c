#include<stdio.h>
#include<string.h>
int main()
{
    char s[10001];
    scanf("%s",&s);

    int sz = strlen(s);

    int sum = 0;
    for(int i=0; i<sz; i++)
    {
        sum += s[i] - '0';
    }
    printf("%d",sum);
    return 0;
}