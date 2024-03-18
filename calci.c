#include<stdio.h>
int main()
{
    float a,b;
    char op;
    printf("enter the operation to be performed (+,-,*,/)\n");
    scanf("%c",&op);
    printf("enter the no.s\n");
    scanf("%f%f",&a,&b);
    switch(op)
    {
    case '+':
        printf("%f + %f =%f",a,b,a+b);
        break;
        case '-':
        printf("%f - %f =%f",a,b,a-b);
        break;
        case '*':
        printf("%f * %f =%f",a,b,a*b);
        break;
        case '/':
        printf("%f / %f =%f",a,b,a/b);
        break;
        default:
            printf("incorrect operator");
            break;
    }
    return 0;
}
