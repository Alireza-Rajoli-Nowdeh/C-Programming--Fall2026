#include<stdio.h>
#define pi 3.14159265358979
int main()
{
    double sumc=1,sums=1, tc=1,ts=0, x;
    printf("write the number of x:.\n");
    scanf("%lf",&x);
    x = (x/(180)*pi);
    sums = x;
    ts = x;
    int i=1;
    while( tc > 1e-13 || tc < -1e-13 )
    {
        tc = (tc)*(-(x*x)/((2*i)*((2*i)-1)));
        sumc = sumc+tc;
        i++;
    }
    i=1;
    while( ts > 1e-13 || ts < -1e-13 )
    {
        ts = (ts)*(-(x*x)/((2*i)*((2*i)+1)));
        sums = sums+ts;
        i++;
    }
    if (sumc < 1e-13 && sumc > -1e-13  )
    {
        printf("Infinity");
    }
    else
    {
        printf("Output is %f:",sums/sumc);
    }
    return 0;
}
