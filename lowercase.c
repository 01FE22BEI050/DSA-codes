#include<stdio.h>
int main()
{
    char c;
    printf("enter the alphabet to be converted\n");
    scanf("%c",&c);
    if(isalpha(c))
    {
        if(c>=65 && c<=90)
        {
            c=c+32;
            printf("the lower case alphabet is %c",c);
        }
        else
            printf("the alphabet is already in lowercase");
    }
    return 0;
}
