#include <stdio.h>

int main()
{
    double L;
    double W;
    printf("Please write length and Width in centimete. \n");
    scanf("%lf%lf",&L,&W);

    printf("Yourre %lf and %lf and are is %lf \n",L,W, 1.0/2*W*L);

    return 0;
}
