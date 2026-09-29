# include<stdio.h>
/*in a if/else if/else chain, if we have an input we check condition from the first one to the last one and the first one that satisfy condition will go throughtthat part*/
int main()
    {
        int x;
        printf("enter value x:\n");
        scanf("%d", &x);

        if (x < 5)
        {
            x = x + 5;
            printf("A");
        }
        else if (x < 8)
        {
            x = x - 2;
            printf("B");
        }
        else
            printf("C");

        if (x > 6)
            printf("D");

        printf("\n");
        return 0;

    }
