#include <stdio.h>
#include <string.h>

int main()
{
    char x[1000], a;
    int count = 0;

    printf("Enter string:");
    gets(x);

    printf("Enter the character:");
    scanf("%c", &a);

    for (int i = 0; i < strlen(x); i++)
    {
        if (a == x[i])
        {
            ++count;
        }
    }
    printf("The frequency of given character is %d",count);
    return 0;
}