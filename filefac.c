#include<stdio.h>
int main()
{
    FILE *infact,*outfact;
    int n,j,fact=1;
    infact=fopen("infact.txt","r");
    outfact=fopen("outfact.txt","w");
    if(infact==NULL)
    {
        perror("error\n");
        return 1;
    }
    while(!feof(infact))
    {
        fscanf(infact,"%d",&n);
    }
    for(j=1;j<=n;j++)
    {
        printf("%d + ",j);
        fact=fact*j;
    }
    fprintf(outfact,"factorial is %d",fact);
    fclose(outfact);
    return 0;
}
