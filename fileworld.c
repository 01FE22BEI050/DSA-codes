#include<stdio.h>
#define max 100
int main()
{
    FILE *input,*output;
    char word[max];
    int i=0,j;
    input=fopen("input.txt","r");
    output=fopen("output.txt","w");
    if(input==NULL)
    {
        perror("error\n");
        return 1;
    }
    else
    {
        while(!feof(input))
        {
            fscanf(input,"%c",&word[i]);
            i++;
        }
        for(j=0;j<i;j++)
        {
        printf("%c",word[j]);
        fprintf(output,"%c",word[j]);
        }
        fclose(output);
    }
    return 0;
}
