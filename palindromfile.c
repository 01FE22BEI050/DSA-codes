#include<stdio.h>
#include<string.h>
#define max 100
 int palindrome(char str[])
 {
     int l=0;
     int h= strlen(str)-1;
     while(h>1)
     {
         if (str[l++]!= str[h--])
         {
             return 0;
         }
     }
     return 1;
 }
int main()
{
    FILE *input,*output;
    input=fopen("input.txt","r");
    output=fopen("output.txt","w");
    char str[max];
    if(input==NULL)
    {
        perror("error");
        return 1;
    }
    fscanf(input,"%s",str);
    if(palindrome(str))
    {
        printf("%s is a palindrome \n",str);
        fprintf(output,"%s is a palindrome \n",str);
    }
    else
    {
        printf("%s is not a palindrome \n",str);
        fprintf(output,"%s is not a palindrome \n",str);
    }
    fclose(output);
    return 0;
}
