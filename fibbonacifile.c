#include<stdio.h>
int main()
{
    FILE *infib,*outfib;
    int temp=0,i,a=1,n,sum;
    infib=fopen("infib.txt","r");
    outfib=fopen("outfib.txt","w");
    if(infib==NULL)
    {
        perror("error");
        return 1;
    }
        fscanf(infib,"%d",&n);
    for(i=0;i<n;i++)
    {
        sum=temp+a;
        temp=a;
        a=sum;
    }
    printf("%d",sum);
    fprintf(outfib,"%d",sum);
    fclose(outfib);
    return 0;
}
