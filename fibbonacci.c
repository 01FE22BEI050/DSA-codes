#include<stdio.h>
int main()
{
    int n,i,sum,temp=0,a=1;
    printf("enter the no.");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        sum=temp+a;
        temp=a;
        a=sum;
    }
    printf("%d",sum);
    return 0;
}
