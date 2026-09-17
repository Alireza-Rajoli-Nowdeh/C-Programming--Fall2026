#include <stdio.h>

/*point of this code is to understand how getting more digit when we are working with double and also useign %lf instead of %f in double*/
int main()
{
    double length;
    double width;
    printf("Please write the length of rectangle in cm\n");
    printf("Please write the width of rectangle in cm\n");
    scanf("%lf%lf", &length,&width);
    printf("Ah, the lenth of the rectangle is %.10lf and the width is %.10lf",length,width);
    return 0;
}
