#include <stdio.h>

int main ()
{
    int CD;
    int AD;
    printf("Please write Canadian amount:\n");
    scanf("%d", &CD);
    AD = 1.256*CD;
    printf("you Anerican dollar is:%d\n", AD);
    float Final;
    Final= AD *CD;
    printf("Product of two numbers are: %f", Final);
    return 0;
}
