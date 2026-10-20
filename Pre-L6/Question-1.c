#include<stdio.h>

int main()
{
    float num1;
    float num2;
    float num3;
    float numnew;
    float avg;
    printf("enter first 3 numbers.\n");
    scanf("%f",&num1);
    scanf("%f",&num2);
    scanf("%f",&num3);
    avg = (num1+num2+num3)/3.00;
    printf("Average of first 3 number is %f:\n", avg);
    avg = 0;
    for(int i=3;i<10;i++)
    {
        printf("Please enter %d number.\n", i+1);
        scanf("%f",&numnew);
        num1=num2;
        num2=num3;
        num3=numnew;
        avg=avg+(num1+num2+num3)/3;
        printf("average is %f:.\n",avg);
        avg = 0;
    }
    return 0;
    }
