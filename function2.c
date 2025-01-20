#include<stdio.h>

// Function Definition 
int Addition(int Value1, int Value2)
{
    int Result = 0; // Local Variable 
    Result = Value1 + Value2;
    return Result;
}

int main()   // Entry Point Function
{

    int No1 = 0, No2 = 0, Ans = 0; // Local Variables

    printf("Enter first Number: ");
    scanf("%d",&No1);

    printf("Enter Second Number: ");
    scanf("%d",&No2);

    Ans = Addition(No1, No2); // Function Call 
    printf("Addition is: %d",Ans);

    return 0;
} 