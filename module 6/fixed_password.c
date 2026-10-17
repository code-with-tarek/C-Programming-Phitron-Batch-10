#include<stdio.h>
int main()
{
    int x;
    
    while(x!=1999)
    {
        scanf("%d",&x);
        if(x!=1999)
        {
            printf("Wrong\n");
        }
        else
        {
            printf("Correct\n");
        }
    }
    
    return 0;
}