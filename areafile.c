#include<stdio.h>
int main() {
    FILE *input,*output;
    input=fopen("input.txt","r");
    output=fopen("output.txt","w");
  int length, width, area;
  if(input==NULL)
  {
      perror("error");
      return 1;
  }
  fscanf(input,"%d", &length);
  fscanf(input,"%d", &width);

  area = length * width;

  printf("The area of the rectangle is %d\n", area);
  fprintf(output,"The area of the rectangle is %d\n", area);
  fclose(output);
  return 0;
}
