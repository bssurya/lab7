#include <stdio.h>
#include <string.h>

int main()
{
  char x[1000],i,j,max;

  printf("Enter elemets:");
  gets(x);

  j=i+1;

  for(i=0;i<strlen(x);i++)
  {
    for(j=1;j<strlen(x)-1;j++)
    {
        if (x[i]>x[j])
        { max = x[i]; }
        else max=x[j];

    }
  }
  x[i]='\0';

  printf("largest element is %c",max);

  return 0;



  
}