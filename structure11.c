#include<stdio.h>

#pragma pack(1)
struct Demo
{
    int i;          //4
    float f;        //4
    char ch;        //1
    double d;       //8
};                  // Summation: 17

union Hello
{
    int i;     //4
    float f;   //4
    char ch;   //1
    double d;  //8
};             // largest: 8

int main()
{
    struct Demo dobj;

    union Hello hobj;
    
    printf("Size of Structure is: %d\n",sizeof(dobj));
    printf("Size of Union is: %d\n",sizeof(hobj));

    hobj.i = 97;
    hobj.f = 10.0; 


    return 0;
} 