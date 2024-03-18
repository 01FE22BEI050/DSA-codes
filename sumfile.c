#include<stdio.h>
#define max 100
int main()
{
    FILE *input,*output;
    int n,remainder,reverse=0;
    input=fopen("input.txt","r");
    output=fopen("output.txt","w");
    if(input==NULL)
    {
        perror("error");
        return 1;
    }
    fscanf(input,"%d",&n);
    while(n!=0)
    {
        remainder=n%10;
        reverse=reverse*10+remainder;
        n/=10;
    }
    printf("reversed number = %d",reverse);
    fprintf(output,"reversed number = %d",reverse);
    fclose(output);
    return 0;
}
