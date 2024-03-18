#include <stdio.h>
#define max 100
int main()
{
    FILE *input,*output;
    input=fopen("input.txt","r");
    output=fopen("output.txt","w");
     int a[max],i,s=0,g,l,n;
     float avg;
     fscanf(input,"%d",&n);
     for(i=0;i<n;i++)
     {
          fscanf(input,"%d",&a[i]);
          s=s+a[i];
          avg=s/n;
     }
     printf("Sum of Array Elements = %d\n",s);
     fprintf(output,"Sum of Array Elements = %d\n",s);
     printf("Average of Elements   = %.2f\n",avg);
     fprintf(output,"Average of Elements   = %.2f\n",avg);
     g=a[0];
     for(i=0;i<n;i++)
          if(a[i]>g)
               g=a[i];
     printf("Greatest Element      = %d\n",g);
     fprintf(output,"Greatest Element      = %d\n",g);
     l=a[0];
     for(i=0;i<n;i++)
          if(a[i]<l)
               l=a[i];
     printf("Lowest Element        = %d",l);
     fprintf(output,"Lowest Element        = %d",l);
     fclose(output);
     return 0;
}
