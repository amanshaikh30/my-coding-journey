#include<stdio.h>
#include<string.h>

int main()
{
    char Arr[] = {'H','e','l','l','o','\0'};
    char Brr[] = "Hello";

    printf("%d\n",sizeof(Arr));
    printf("%d\n",sizeof(Brr));

    printf("Length of string is : %d\n",strlen(Arr));
    printf("Length of string is : %d\n",strlen(Brr));

    return 0;
} 