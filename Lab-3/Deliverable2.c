#include<stdio.h>

int main()
{
    int num;
    printf("Please write a number:\n");
    scanf("%d",&num);
    if(num%2==0)
        printf("Number is Even.\n");
    else
        printf("Number is Odd.\n");
    if(num%4==0)
        printf("Number is devisiable to 4.\n");
    else
        printf("Number is not devisable to 4.\n");

    return 0;
}
