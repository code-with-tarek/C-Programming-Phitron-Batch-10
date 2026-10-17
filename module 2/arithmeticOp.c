#include<stdio.h>
int main()
{
    int a = 10;
    int b = 35;
    float c = 35.10;

    int sum = a+b;
    printf("Sumation = %d\n",sum);

    int sub = a-b;
    printf("Subtriction = %d\n",sub);

    int mul = a*b;
    printf("Multipication = %d\n",mul);

    int div = b/a;
    printf("Divison = %d\n",div);

    float divi = c/a;
    printf("Divison = %f\n",divi);

    int mod = b % a;
    printf("Modulas = %d\n",mod);

    return 0;

}