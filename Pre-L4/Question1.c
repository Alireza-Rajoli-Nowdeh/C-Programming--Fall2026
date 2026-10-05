#include<stdio.h>


int main()
{
    int i=0,j=0,prev=0,cur;
        printf("Please write sequence.\n");
    for(i;i<15;i++)
    {
        scanf("%d",&cur);
        if (cur>prev)
            j++;
        prev = cur;

    }

    printf("number of larger than the preceding number is %d.\n ",j);

    return 0;
}
