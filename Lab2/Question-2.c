#include <stdio.h>

/*point of this code is to understand how give two value to scanf()*/
int main()
{
        float length;
    float width;
    printf("Please write the length of rectangle in cm\n");
    printf("Please write the width of rectangle in cm\n");
    scanf("%f%f", &length,&width);
    printf("Ah, the lenth of the rectangle is %f and the width is %f",length,width);
    return 0;
}
