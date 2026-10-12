#include<stdio.h>

int main()
{
    float sum =1,t=1,x;
    printf("write the number of x:.\n");
    scanf("%f",&x);
    for(int i=1;i<=1000;i++)
    {
       if (i!=1)
       {
            t = (t)*(x/(i-1));
            sum = sum+t;
       }
    }
    printf("Output is %f:",sum);
    return 0;
}
