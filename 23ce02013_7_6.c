#include<stdio.h>
#include<string.h>

int main()

{
    char x[1000] ,y[1000];

    printf("Enter String: ");
    gets(x);

    printf("Enter sub string:");
    gets(y);

    for (int i=0;i<strlen(x);i++)
    {
        for (int j=0;j<strlen(y);j++)
        {
            if(x[i]==y[j]) 
    
            else;
        }

    }
    return 0;
}