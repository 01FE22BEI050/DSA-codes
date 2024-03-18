#include<stdio.h>
#include<string.h>
int main()
{
    char ch[20];
    printf("enter the file name\n");
    scanf("%s",ch);
    if(isalpha(ch))
    {
        for(int i=0;i<1;i++)
    {
        if(ch[i]>=97 && ch[i]<=122)
        {
            ch[i]=ch[i]-32;
            printf("%s",ch);
        }
        else
            printf("already in cap");
    }}
    return 0;
}
