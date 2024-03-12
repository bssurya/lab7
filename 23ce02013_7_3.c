#include <stdio.h>
#include <string.h>

int main()
{
    char x[1000];
    int i;

    printf("Enter string:");
    gets(x);

    for (i=strlen(x);i>=0;i--)
    {
        printf("%c",x[i]);
    }

    return 0;
  
}