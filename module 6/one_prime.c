#include<stdio.h>
#include<math.h>
int main()
{
    int n;
    int count=0;
    scanf("%d",&n);
    if(n<=1)
    {
        printf("NO");
    }
 
    for(int i=2;i<=sqrt(n);i++)
    {
        if(n%i==0)
        {
            count ++;
            break;
        }
    }
    if(count==0)
    {
        printf("YES");
    }    
    else
    {
        printf("NO");
    }
    return 0;
}