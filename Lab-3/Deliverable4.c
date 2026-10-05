#include<stdio.h>

/*ANd is && in C programming*/
int main()
{
    int num;
    printf("Please enter a number. \n");
    scanf("%d", &num);
    if (num%2==0 && num%3==0)
        printf("number is devisable to 6");
    else if(num%2==0)
        printf("number is devidable to 2 but not devidable to 3");
    else if(num%3!=0)
        printf("number is devidable to 3 but not devidable to 3");
    else
        printf("number is neither devidable to 2 but nor devidable to 3");



    return 0;
}
