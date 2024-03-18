#include<stdio.h>
int main()
{
    int a,b,temp;
    printf("enter the no. to be swapped a and b\n");
    scanf("%d%d",&a,&b);
    temp=a;
    a=b;
    b=temp;
    printf("the no.s after swapping: %d and %d",a,b);
    return 0;
}
