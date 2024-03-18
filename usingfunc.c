#include<stdio.h>
float addr(float, float);
float addc(float, float);
int main()
{
    float r1,r2,c1,c2,r,c;
    printf("enter the complex:\n");
    scanf("%f%*c %f%*c",&r1,&c1);
    printf("enter the complex:\n");
    scanf("%f%*c %f%*c",&r2,&c2);
    r=addr(r1,r2);
    c=addc(c1,c2);
    printf("sum = %.3f + i%.3f",r,c);
}
float addr(float r1,float r2)
{
    float r;
    r=r1+r2;
    return r;
}
float addc(float c1,float c2)
{
    float c;
    c=c1+c2;
    return c;
}
