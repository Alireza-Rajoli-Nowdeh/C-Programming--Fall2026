#include<stdio.h>

/*this code wants teach how to use switch*/
int main()
{
    int a,b;
    char op;
    printf("Enter an ...");
    scanf("%d%c%d",&a,&op,&b);

    switch(op)
    {
    case '+':
        printf("result is :%d.\n",a+b);
        break;
    case '-':
        printf("result is :%d.\n",a-b);
        break;
    case '/':
        if(b != 0)
            if(a%b==0)
            {
            {printf("result is :%d.\n",a/b);
            break;}
            }
            else
            {{printf("NOT DIVISIble");
            break;}}

        else
            {printf("wrong input (discreminator can't be 0)");
            break;}
    case '*':
        printf("result is :%d.\n",a*b);
        break;
    default:
        printf("wrong input");
    return 0;
    }
}
