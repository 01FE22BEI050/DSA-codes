#include<stdio.h>
int main()
{
    float a,b;
    char op;
    FILE *input,*output;
    input=fopen("input.txt","r");
    output=fopen("output.txt","w");
    printf("enter the operation to be performed (+,-,*,/)\n");
    scanf("%c",&op);
    fscanf(input,"%f%f",&a,&b);
    switch(op)
    {
    case '+':
        printf("%f + %f =%f",a,b,a+b);
        fprintf(output,"%f + %f =%f",a,b,a+b);
        break;
        case '-':
        printf("%f - %f =%f",a,b,a-b);
         fprintf(output,"%f - %f =%f",a,b,a-b);
        break;
        case '*':
        printf("%f * %f =%f",a,b,a*b);
        fprintf(output,"%f * %f =%f",a,b,a*b);
        break;
        case '/':
        printf("%f / %f =%f",a,b,a/b);
         fprintf(output,"%f / %f =%f",a,b,a/b);
        break;
        default:
            printf("incorrect operator");
             fprintf(output,"incorrect operator");
            break;
    }
    fclose(output);
    return 0;
}

