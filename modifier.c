#include<stdio.h>

int main()
{

    int a = 10;              //4 bytes
    short int b = 10;        //2 bytes
    long int c = 10;         //8 bytes

    printf("%d\n",sizeof(a));  
    printf("%d\n",sizeof(b));  
    printf("%d\n",sizeof(c));    

    return 0;
} 