#include<stdio.h>
int main()
{
    float a1,a2,b1,b2,a,b;
    printf("enter the real and imaginary part of first complex no.\n");
    scanf("%f%f",&a1,&b1);
    printf("enter the real and imaginary part second complex no.\n");
    scanf("%f%f",&a2,&b2);
    a=a1+a2;
    b=b1+b2;
    printf("the no.s after addition are %.2f + i%.2f",a,b);
    return 0;
}
