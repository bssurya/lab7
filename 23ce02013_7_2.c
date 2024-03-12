#include<stdio.h>
#include<string.h>

int main()

{
    char x[10000];
    int i;

    printf("Enter string:");
    gets(x);
    int k=0;
    char new[100];
    for(i=0;i< strlen(x) ;i++)
    {
        if(x[i]>= 'a' && x[i]<= 'z' || x[i]>= 'A' && x[i]<='Z' ){
             x[k]=x[i];
             k++;
        }
        }
   x[k]='\0';
    printf("New string is ");
    puts(x);
   

    return 0;

}