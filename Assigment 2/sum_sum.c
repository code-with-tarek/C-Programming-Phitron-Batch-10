#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);

    long long positive =0;
    long long negative =0;

    for(int i=0; i<n; i++)
    {
        int x;
        scanf("%d",&x);

        if (x>0)
        {
            positive +=x;
        } 
        else if (x<0) 
        {
            negative +=x;
        }
    }
    printf("%lld %lld\n",positive,negative);
    return 0;
}