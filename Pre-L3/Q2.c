# include<stdio.h>

int main()
{
    int num1, num2;
    printf("Pleas write the first number:");
    scanf("%d",&num1);
    printf("Pleas write the second number:");
    scanf("%d",&num2);
    if (num1==num2)
        printf("wrong input");
    else if(num1 > num2)
        printf("%d",num2);
    else

        printf("%d", num1);

    return 0;
}
