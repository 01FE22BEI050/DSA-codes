#include<stdio.h>
#define maxsize 100
int main()
{
    //file pointer
    FILE *input,*output;//file pointer
    int a[maxsize];// size of data
    int i=0,j,res=0;// for iteration
    input=fopen("input.txt","r");
    output=fopen("output.txt","w");
    if(input==NULL)
    {
        perror("\n error:\n");
        return 1;
    }
    //iterating through the file
    while(!feof(input))
    {
        fscanf(input,"%d",&a[i]);
        i++;
    }
    //displayed what is the content in the file
    for(j=0;j<i;j++)
    {
       printf("\n%d",a[j]);
       res=res+a[j];
    }
    fprintf(output,"%d",res);
    printf("=%d\n",res);
    fclose(output);
    return 0;

}
