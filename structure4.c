#include<stdio.h>

struct Demo    
{
    int no = 11;            //Not Allowed
    float f = 90.99;        //Not Allowed
    double d = 90.9999;     //Not Allowed
    int i = 67;             //Not Allowed
}; 

int main() 
{
   struct Demo obj;
   
    return 0;
} 
