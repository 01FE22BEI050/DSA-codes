#include <stdio.h>
#include <string.h>
int main()
{
  char str1[] = "Hello";
  char str2[] = "world";
  char str3[50];

  strcat(str3, str1);
  strcat(str3, str2);

  printf("The concatenated string is: %s\n", str3);

  return 0;
}
