#include<stdio.h>
int main()
{
    
    int t;
    if(scanf("%d", &t) != 1) return 0;
   while(t--)
    
    {
        int n;
        scanf("%d",&n);
        long long int fact=1;
        for(int i=1;i<=n;i++)
            {
                fact *= i;
            }
        printf("%lld\n",fact);  
    }
   
    return 0;
}