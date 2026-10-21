#include<stdio.h>
#define pi 3.14159265358979
double sin(double x)
{
    int i=1;
    double sums=1,ts=x;
    while( ts > 1e-13 || ts < -1e-13 )
    {
        ts = (ts)*(-(x*x)/((2*i)*((2*i)+1)));
        sums = sums+ts;
        i++;}
    return sums;
}


double cos(double x)
{
    int i=1;
    double sumc=1, tc=1;
    while( tc > 1e-13 || tc < -1e-13 )
    {
        tc = (tc)*(-(x*x)/((2*i)*((2*i)-1)));
        sumc = sumc+tc;
        i++;
    }
    return sumc;
}

int main()
{
    double sumc=1,sums=1, tc=1,ts=0, x;


    printf("write the number of x:.\n");
    scanf("%lf",&x);
    x = (x/(180)*pi);
    sums = x;
    ts = x;

    sums = sin(x);
    sumc = cos(x);
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
