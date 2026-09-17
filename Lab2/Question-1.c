#include <stdio.h>

/* Point of this piece of code is learning how to use printf() and scanf()*/
int main()
{
    float length;
    float width;
    printf("Please write the length of rectangle in cm\n");
    scanf("%f", &length);
    printf("Please write the width of rectangle in cm\n");
    scanf("%f", &width);
    printf("Ah, the lenth of the rectangle is %f and the width is %f",length,width);
    return 0;
}
