#include <stdio.h>
int main()
{
    int a,b,sum;
    printf("enter two numbers\n");
    scanf("%d %d", &a, &b);
    sum=a+b;
    printf("sum of %d and %d is " ,a,b);
    printf("%d\n",sum);
    return 0;
}