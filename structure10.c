#include<stdio.h>

struct Demo 
{
    int no;
    float f;
};

struct PPA
{
    int X;
    struct Demo dobj;
    int Y;
};

int main()
{
    struct PPA obj;
    obj.X = 10;
    obj.Y = 20;
    obj.dobj.no = 11; 
    obj.dobj.f = 3.14;

    return 0;
}