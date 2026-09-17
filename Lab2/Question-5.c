#include <stdio.h>

/*point of this code is to understand how using 1/2 is different from usign 1.0/2 , 1.0/2.0 , 1/2.0*/
int main()
{
    float length;
    float width;
    printf("Please write the length of rectangle in cm\n");
    printf("Please write the width of rectangle in cm\n");
    scanf("%f%f", &length,&width);
    float k;
    k = 1.0/2*length*width;
    printf("Ah, the lenth of the rectangle is %f and the width is %f and the area is %f",length,width, k);
    return 0;
}
