#include<stdio.h>
int main()
{
    FILE *inprime,*outprime;
    int i,flag=0,num;
    inprime=fopen("inprime.txt","r");
    outprime=fopen("outprime.txt","w");
    if(inprime==NULL)
    {
        perror("error");
        return 1;
    }
    while(!feof(inprime))
    {
        fscanf(inprime,"%d",&num);
    }
    for(i=2;i<=num/2;i++)
    {
        if(num%i==0)
        {
            flag=1;
            break;
        }
    }
    if(num==1)
    {
        printf("1 is neither prime nor composite.");
        fprintf(outprime,"1 is neither prime nor composite.");
    }
    else
    {
        if(flag==0)
        {
            printf("%d is prime number.",num);
            fprintf(outprime,"%d is prime number.",num);
        }
        else
        {
            printf("%d is not a prime number.",num);
            fprintf(outprime,"%d is not a prime number.",num);
        }
    }
    fclose(outprime);
    return 0;
}
